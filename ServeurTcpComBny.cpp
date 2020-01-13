/******************************************************************
* Auteurs:
*   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
*   Eric Valade (Eric.Valade@ac-nice.fr)
* LGT Les Eucalyptus - Nice
* Section de technicien supérieur
* Systèmes Numériques option Informatique et réseau (SN-IR)
* $Id: ServeurTcpComBny.cpp 1347 2017-12-11 14:42:45Z eric $
* $HeadURL: svn://buffalo500/cdt/trunk/2A/s15DiagActSql/TpSql/code/Superviseur/ServeurTcpComBny.cpp $
******************************************************************/
#include "ServeurTcpComBny.h"
#include "TcpComBny.h"

#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

ServeurTcpComBny::ServeurTcpComBny(): socketDesc(-1), isBind(false) {
}

ServeurTcpComBny::~ServeurTcpComBny() {
  this->fermer();
}

void ServeurTcpComBny::associerBase(struct in_addr inp, unsigned short port) throw (TcpIpComBnyException) {
  if(this->isBind)  throw TcpIpComBnyException("already binded");
  if(this->socketDesc == -1) {
    this->socketDesc = socket(AF_INET, SOCK_STREAM, 0);
    if(this->socketDesc == -1) throw TcpIpComBnyException("socket");
  }
  struct sockaddr_in adresseServeur;
  int ctrl;
  bzero(&adresseServeur, sizeof(struct sockaddr_in));
  adresseServeur.sin_family = AF_INET;
  adresseServeur.sin_port = htons(port);
  adresseServeur.sin_addr = inp;
  ctrl = bind (this->socketDesc, (struct sockaddr*) &adresseServeur , sizeof(struct sockaddr_in));
  if(ctrl == -1 ) throw TcpIpComBnyException("bind");
  this->isBind = true;
}

void ServeurTcpComBny::associer(std::string ip, unsigned short port) throw (TcpIpComBnyException) {
  struct in_addr inp;
  int ctrl;
  ctrl = inet_aton (ip.c_str() , &inp);
  if(ctrl == 0 ) throw TcpIpComBnyException("inet_aton");
  this->associerBase(inp, port);
}

void ServeurTcpComBny::associer(unsigned short port) throw (TcpIpComBnyException) {
  struct in_addr inp;
  inp.s_addr = INADDR_ANY;
  this->associerBase(inp, port);
}

void ServeurTcpComBny::ouvrir(unsigned int nbPlace) throw (TcpIpComBnyException) {
  if(this->socketDesc == -1) throw TcpIpComBnyException("socket does not exist");
  if(!this->isBind)  throw TcpIpComBnyException("no binding for socket");
  int ctrl;
  ctrl = listen (this->socketDesc , nbPlace) ;
  if(ctrl == -1 ) throw TcpIpComBnyException("listen");
}

TcpComBny ServeurTcpComBny::attendreClient(void) throw (TcpIpComBnyException) {
  if(this->socketDesc == -1) throw TcpIpComBnyException("socket does not exist");
  if(!this->isBind)  throw TcpIpComBnyException("no binding for socket");
  socklen_t tailleAdresseClient;
  tailleAdresseClient = sizeof(struct sockaddr_in);
  bzero((char*) &tailleAdresseClient, sizeof(tailleAdresseClient));
  int socketDialogueClient;
  struct sockaddr_in adresseClient;
  socketDialogueClient = accept(this->socketDesc , (struct sockaddr*) &adresseClient , &tailleAdresseClient);
  if (socketDialogueClient == -1) throw  TcpIpComBnyException("accept");
  return TcpComBny(socketDialogueClient);
}

void ServeurTcpComBny::fermer() {
  if(this->socketDesc != -1) {
    close(this->socketDesc);
    this->socketDesc = -1;
  }
}

#ifdef ServeurTcpComBny_Ut_
/*
g++ -o ServeurTcpComBnyUt -g ServeurTcpComBny.cpp TcpIpComBnyException.cpp -I. TcpComBny.cpp -DServeurTcpComBny_Ut_ && ./ServeurTcpComBnyUt ; rm ServeurTcpComBnyUt
g++ -c ServeurTcpComBny.cpp -I. -D NDEBUG

*/
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <iostream>
int main(void) {
  try {
    if(fork() == 0) {
      sleep(1);
      system("echo azerty | nc -4 127.0.0.1 55555");
      exit(EXIT_SUCCESS);
    }
    ServeurTcpComBny serveurTcpComBny;
    serveurTcpComBny.associer("192.168.140.108", 55553);
    serveurTcpComBny.ouvrir(5);
	std::cout << "client lance" << std::endl;
    TcpComBny tcpComBny(serveurTcpComBny.attendreClient());
    tcpComBny.envoyer("1234567890\n", 11);
    char buf[32];
    bzero(buf, 32);
    std::size_t nbRecu = 0;
	std::cout << "attente de reception" << std::endl;
    tcpComBny.recevoir(buf, 14, nbRecu);
    std::cout << "message recu" << std::endl;
    //assert(nbRecu == 7);
	std::cout << "message :" << std::string(buf) << std::endl;
    //assert(std::string(buf) == "azerty\n");
    tcpComBny.envoyer("message recu\n", 13);

    tcpComBny.fermer();
    serveurTcpComBny.fermer();
  }
  catch(std::exception &e) {
    std::cerr << e.what() << std::endl;
    sleep(2);
  }
  system("killall nc > /dev/null 2>&1");
  return EXIT_SUCCESS;
}
#endif

