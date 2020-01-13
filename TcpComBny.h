/******************************************************************
* Auteurs:
*   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
*   Eric Valade (Eric.Valade@ac-nice.fr)
* LGT Les Eucalyptus - Nice
* Section de technicien supérieur
* Systèmes Numériques option Informatique et réseau (SN-IR)
* $Id: TcpComBny.h 133 2016-03-03 17:21:00Z eric $
* $HeadURL: svn://buffalo500/IrisDesignPattern/trunk/Model/ComBnyBase/sansHeritageNiCatalogue/TcpComBny.h $
******************************************************************/

#ifndef _TCPCOMBNY_H
#define _TCPCOMBNY_H

#include <cstdarg>

#include <TcpIpComBnyException.h>

class TcpComBny {
  public:
    TcpComBny(const int) throw(TcpIpComBnyException);
    ~TcpComBny();
    void recevoir(char*  buffer, std::size_t  size, std::size_t & count) throw(TcpIpComBnyException);
    void fscanf(const char* format, ...);
    void fscanf(const char* format, va_list args);
    void envoyer(const char*  buffer,  std::size_t  size) throw(TcpIpComBnyException);
    void fprintf(const char* format, ...);
    void fprintf(const char* format, va_list args);
    void fermer();
  private:
    int socketDesc;
    FILE * socketDescFile;
};

#endif

