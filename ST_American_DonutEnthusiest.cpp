/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Apr 3, 2021
 *      Author: Hannah Hobson
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i):Smalltalk_American(AMERICAN_DE, i){}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){}

void ST_American_DonutEnthusiest::populatePhrases(){

	Smalltalk::mySmallTalk.clear();
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_5);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);


}
