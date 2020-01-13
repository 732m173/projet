/******************************************************************
* Auteurs:
*   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
*   Eric Valade (Eric.Valade@ac-nice.fr)
* LGT Les Eucalyptus - Nice
* Section de technicien supérieur
* Systèmes Numériques option Informatique et réseau (SN-IR)
* $Id: ServeurTcpComBny.h 1347 2017-12-11 14:42:45Z eric $
* $HeadURL: svn://buffalo500/cdt/trunk/2A/s15DiagActSql/TpSql/code/Superviseur/ServeurTcpComBny.h $
******************************************************************/
#ifndef _SERVEURTCPCOMBNY_H
#define _SERVEURTCPCOMBNY_H

#include "TcpIpComBnyException.h"

#include <netinet/in.h>
#include <arpa/inet.h>
#include <string>

class TcpComBny;
class ServeurTcpComBny {
  public:
    ServeurTcpComBny();
    ~ServeurTcpComBny();
    void associer(std::string ip, unsigned short port) throw (TcpIpComBnyException);
    void associer(unsigned short port) throw (TcpIpComBnyException);
    void ouvrir(unsigned int nbPlace) throw (TcpIpComBnyException);
    TcpComBny attendreClient(void) throw (TcpIpComBnyException);
    void fermer();
  private:
    int socketDesc;
    bool isBind;
    void associerBase(struct in_addr inp, unsigned short port) throw (TcpIpComBnyException);
};

#endif

