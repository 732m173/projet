/******************************************************************
 * Auteurs:
 *   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
 *   Eric Valade (Eric.Valade@ac-nice.fr)
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 * $Id: TcpIpComBnyException.h 1347 2017-12-11 14:42:45Z eric $
 * $HeadURL: svn://buffalo500/cdt/trunk/2A/s15DiagActSql/TpSql/code/Superviseur/TcpIpComBnyException.h $
 ******************************************************************/
#ifndef _TCPIPCOMBNYEXCEPTION_H_
#define _TCPIPCOMBNYEXCEPTION_H_
#include <string>
#include <exception>

class TcpIpComBnyException : public std::exception{
  private:
    std::string message;
 public:
    TcpIpComBnyException( const std::string description) : std::exception(){
      this->message="TcpIpComBnyException\n\t"+description+"\n";
    }
    const char* what() const throw() {
      return this->message.c_str();
    }
    virtual ~TcpIpComBnyException() throw() {}
};
#endif
