/*
 * Formation.cpp
 *
 *  Created on: 10 mai 2019
 *      Author: ROGNONE Alex
 */

#include "Formation.h"

Formation::Formation(std::string nom,
		std::string sigle,
		std::string video,
		std::string prospectus,
		std::string code,
		std::string emplacement):nom(nom), sigle(sigle), video(video), prospectus(prospectus), code(code), emplacement(emplacement) {
	// TODO Auto-generated constructor stub

}

Formation::~Formation() {
	// TODO Auto-generated destructor stub
}
/* **************************************** */
std::string Formation::getNom() const {
	return nom;
}

void Formation::setNom(std::string nom) {
	this->nom = nom;
}
/* **************************************** */
std::string Formation::getSigle() const {
	return sigle;
}

void Formation::setSigle(std::string sigle) {
	this->sigle = sigle;
}
/* **************************************** */
std::string Formation::getCode() const {
	return code;
}

std::string Formation::getVideo() const {
	return video;
}
/* **************************************** */
void Formation::setVideo(std::string video) {
	this->video = video;
}

void Formation::setCode(std::string code) {
	this->code = code;
}
/* **************************************** */
std::string Formation::getProspectus() const {
	return prospectus;
}

void Formation::setProspectus(std::string prospectus) {
	this->prospectus = prospectus;
}
/* **************************************** */
std::string Formation::getEmplacement() const {
	return emplacement;
}

void Formation::setEmplacement(std::string emplacement) {
	this->emplacement = emplacement;
}
