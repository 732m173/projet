/*
 * Formation.h
 *
 *  Created on: 10 mai 2019
 *      Author: guest-snir
 */

#ifndef FORMATIONDELETE_H_
#define FORMATIONDELETE_H__H_
#include <string>
class formationDelete {
public:
	formationDelete(std::string code);
	virtual ~formationDelete();
	std::string getCode() const;
	void setCode(std::string code);


private:
		std::string nom;
		std::string sigle;
		std::string video;
		std::string prospectus;
		std::string code;
		std::string emplacement;

};

#endif /* FORMATION_H_ */
