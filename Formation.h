/*
 * Formation.h
 *
 *  Created on: 10 mai 2019
 *      Author: guest-snir
 */

#ifndef FORMATION_H_
#define FORMATION_H_
#include <string>
class Formation {
public:
	Formation(std::string nom,
	std::string sigle,
	std::string video,
	std::string prospectus,
	std::string code,
	std::string emplacement);
	virtual ~Formation();
	std::string getNom() const;
	void setNom(std::string nom);
	
	std::string getSigle() const;
	void setSigle(std::string sigle);
	
	std::string getVideo() const;
	void setVideo(std::string video);
	
	std::string getProspectus() const;
	void setProspectus(std::string prospectus);
	
	std::string getCode() const;
	void setCode(std::string code);
	
	std::string getEmplacement() const;
	void setEmplacement(std::string emplacement);

private:
		std::string nom;
		std::string sigle;
		std::string video;
		std::string prospectus;
		std::string code;
		std::string emplacement;

};

#endif /* FORMATION_H_ */
