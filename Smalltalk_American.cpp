/*
 * Smalltalk_American.cpp
 *
 *  Created on: Apr 3, 2021
 *      Author: Hannah Hobson
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson) :
		Smalltalk(AMERICAN, iPerson) {
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson) :
		Smalltalk(myNationality, iPerson) {
}

Smalltalk_American::~Smalltalk_American(void) {
}

void Smalltalk_American::populatePhrases() {
	Smalltalk::mySmallTalk.clear();
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

