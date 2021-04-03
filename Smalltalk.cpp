/*
 * Smalltalk.cpp
 *
 *  Created on: Apr 3, 2021
 *      Author: Hannah Hobson
 */
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"
#include "./includes/Watch.h"

//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
Smalltalk::Smalltalk(std::string myNationality, int iPerson) :
		nationality(myNationality), iPerson(iPerson), current_phrase(0) {
}

Smalltalk::~Smalltalk(void) {
}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
//with the last and then it starts over
//takes the form Nationality iPerson: phrase
//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
//AMERICAN 10:Why yes, I would like to supersize that
std::string Smalltalk::saySomething() {
	this->populatePhrases();

	const int NUM_US_PHRASES = 5;
	const int NUM_BRIT_PHRASES = 7;
	const int NUM_DE_PHRASES = 10;
	if (this->nationality == BRIT) {
		int index = this->current_phrase % NUM_BRIT_PHRASES;
		this->current_phrase++;
		return this->mySmallTalk[index];
	} else if (this->nationality == AMERICAN) {
		int index = this->current_phrase % NUM_US_PHRASES;
		this->current_phrase++;
		return this->mySmallTalk[index];
	} else if (this->nationality == AMERICAN_DE) {
		int index = this->current_phrase % NUM_DE_PHRASES;
		this->current_phrase++;
		return this->mySmallTalk[index];
	}

	const std::string fail = "Did not find nationality";
	return fail;
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime() {
	if (!pWatch) {
		return I_DO_NOT_HAVE_A_WATCH;
	}

	return pWatch->getTime();
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
std::unique_ptr<Watch> Smalltalk::takeWatch() {
	std::unique_ptr<Watch> takenWatch;
	if (!this->pWatch) {
		takenWatch = 0;
		;
	}
	takenWatch = std::move(this->pWatch);
	return takenWatch;
}

//if already have a watch then return false and dont change pWatch pointer
//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch) {
		return false;
	}
	this->pWatch = std::move(pWatch);
	return true;
}

