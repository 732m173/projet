/******************************************************************
 * Auteurs:
 *   Frédéric Sutre (Frederic-Albert.Sutre@ac-nice.fr)
 *   Eric Valade (Eric.Valade@ac-nice.fr)
 * LGT Les Eucalyptus - Nice
 * Section de technicien supérieur
 * Systèmes Numériques option Informatique et réseau (SN-IR)
 * $Id: SqlitePersiBnyException.cpp 1347 2017-12-11 14:42:45Z eric $
 * $HeadURL: svn://buffalo500/cdt/trunk/2A/s15DiagActSql/TpSql/code/Superviseur/SqlitePersiBnyException.cpp $
 ******************************************************************/
#include <SqlitePersiBnyException.h>

#ifndef NDEBUG
#ifdef SqlitePersiBnyException_Ut_
#include <cassert>
#include <iostream>
/*
g++ -o SqlitePersiBnyExceptionUt -I. -g -D SqlitePersiBnyException_Ut_ SqlitePersiBnyException.cpp -l sqlite3 \
&& ./SqlitePersiBnyExceptionUt;rm SqlitePersiBnyExceptionUt

g++ -c  SqlitePersiBnyException.cpp -I. -DNDEBUG 
   */
int main(int argc, char **argv) {

  try { 
    throw SqlitePersiBnyException("sqlite3_prepare_v2",SQLITE_OPEN_CREATE);
    printf("%d", __LINE__);
  } catch (std::exception& e) {
	      printf("%d", __LINE__);
    std::string resultat(std::string("SqlitePersiBnyException\n\tsqlite3_prepare_v2 : ")+sqlite3_errstr(SQLITE_OPEN_CREATE));
    //std::cout << e.what() << std::endl;
    //std::cout << resultat << std::endl;
    assert(std::string(e.what()) ==resultat);
  }
}
#endif
#endif

