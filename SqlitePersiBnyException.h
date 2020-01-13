/******************************************************************
 * Auteurs:
 *   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
 *   Eric Valade (Eric.Valade@ac-nice.fr)
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 * $Id: SqlitePersiBnyException.h 1347 2017-12-11 14:42:45Z eric $
 * $HeadURL: svn://buffalo500/cdt/trunk/2A/s15DiagActSql/TpSql/code/Superviseur/SqlitePersiBnyException.h $
 ******************************************************************/
#ifndef _SQLITEPERSIBNYEXCEPTION_H_
#define _SQLITEPERSIBNYEXCEPTION_H_
#include <string>
#include <exception>
#include <sqlite3.h>//sqlite3
class SqlitePersiBnyException :  public std::exception  {
  private:
    int code;
    std::string message;
  public:
    SqlitePersiBnyException(const std::string  description, int code) : std::exception(){
      this->message="SqlitePersiBnyException\n\t"+description+" : "+sqlite3_errstr(code);
    }
    const char* what() const throw() {
      return this->message.c_str();
    }
    virtual ~SqlitePersiBnyException() throw() {}
};
#endif /* SQLITEPERSIBNYEXCEPTION_H_ */
