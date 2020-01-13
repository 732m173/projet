/******************************************************************
 * Auteurs:
 *   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
 *   Eric Valade (Eric.Valade@ac-nice.fr)
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 * $Id: TcpComBny.cpp 133 2016-03-03 17:21:00Z eric $
 * $HeadURL: svn://buffalo500/IrisDesignPattern/trunk/Model/ComBnyBase/sansHeritageNiCatalogue/TcpComBny.cpp $
 ******************************************************************/

#include <TcpComBny.h>

#include <string>

#include <cstddef>
#include <cstdio>

#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

TcpComBny::TcpComBny(const int socketDesc) throw(TcpIpComBnyException): socketDesc(socketDesc) {
  if(this->socketDesc < 0) throw TcpIpComBnyException("no established connection");
  this->socketDescFile=fdopen(this->socketDesc,"a+");
  if(this->socketDescFile == nullptr) throw TcpIpComBnyException("no established connection");
}

TcpComBny::~TcpComBny() {
  this->fermer();
}

void TcpComBny::fermer() {
  if(this->socketDescFile != nullptr) {
	  this->socketDescFile=fdopen(this->socketDesc, "a+");
	  this->socketDescFile=nullptr;
  }
  if(this->socketDesc != -1) {
    //close(this->socketDesc);
    this->socketDesc = -1;
  }
}

void TcpComBny::recevoir(char* buffer, std::size_t size, std::size_t & count) throw(TcpIpComBnyException) {
  if (this->socketDesc == -1) throw TcpIpComBnyException("socket does not exist");
  count = recv(this->socketDesc , buffer , size , MSG_WAITALL);
  if (count == -1) throw TcpIpComBnyException("recv");
}

void TcpComBny::envoyer(const char* buffer, std::size_t size) throw(TcpIpComBnyException) {
  if (this->socketDesc == -1) throw TcpIpComBnyException("socket does not exist");
  int ctrl;
  ctrl = send(this->socketDesc , buffer , size , 0);
  if(ctrl != size) throw TcpIpComBnyException("send");
}

void TcpComBny::fscanf(const char* format, ...) {
	va_list args;
	va_start( args, format );
	this->fscanf(format, args);
	va_end( args );
}
void TcpComBny::fscanf(const char* format, va_list args) {
	if (this->socketDescFile == nullptr) throw TcpIpComBnyException("socket does not exist");
	::vfscanf(this->socketDescFile, format, args);
}


void TcpComBny::fprintf(const char* format, ...) {
	va_list args;
	va_start(args, format );
	this->fprintf(format, args);
	va_end( args );
}
void TcpComBny::fprintf(const char* format, va_list args) {
	if (this->socketDescFile == nullptr) throw TcpIpComBnyException("socket does not exist");
	::vfprintf(this->socketDescFile, format, args);
}

#ifndef NDEBUG
#ifdef TcpComBny_Ut_
/*
g++ -o -std=c++14 TcpComBnyUt -I. -g TcpComBny.cpp TcpIpComBnyException.cpp -DTcpComBny_Ut_  && ./TcpComBnyUt ; rm TcpComBnyUt
g++ -std=c++14 -c TcpComBny.cpp  -I. -D NDEBUG
   */
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <iostream>
int main(void) {
  try {
    if(fork() == 0) {
      system("echo azerty | nc -4 -l 55555 -w 1");
      system("sleep 2");
      // system("killall nc 2>&1 >/dev/null");
      exit(EXIT_SUCCESS);
    }
    sleep(1);
    int socketDesc = socket(AF_INET , SOCK_STREAM , 0) ;
    struct sockaddr_in adresse ;
    bzero((char*) &adresse, sizeof(adresse));
    adresse.sin_family = AF_INET;
    adresse.sin_port = htons(55555);
    inet_aton ("127.0.0.1" , &adresse.sin_addr);
    connect( socketDesc , (struct sockaddr*) &adresse , sizeof(adresse));
    TcpComBny tcpComBny(socketDesc);
    char buf[32];
    bzero(buf, 32);
    std::size_t nbRecu;
    //tcpComBny.recevoir(buf, 7, nbRecu);
    tcpComBny.fscanf("%s",buf);
    //tcpComBny.envoyer("1234567890\n", 11);
    tcpComBny.fprintf("%s\n","1234567890");
    //assert(nbRecu == 7);
    //assert(std::string(buf) == "azerty\n");
    assert(std::string(buf) == "azerty");
  }
  catch(std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return EXIT_SUCCESS;
}
#endif
#endif

