/*
 * Formation.cpp
 *
 *  Created on: 10 mai 2019
 *      Author: ROGNONE Alex
 */

#include "formationDelete.h"

formationDelete::formationDelete(std::string code):code(code) {
	// TODO Auto-generated constructor stub

}

formationDelete::~formationDelete() {
	// TODO Auto-generated destructor stub
}

std::string formationDelete::getCode() const {
	return code;
}

void formationDelete::setCode(std::string code) {
	this->code = code;
}

