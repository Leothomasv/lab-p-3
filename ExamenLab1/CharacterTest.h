#pragma once

#include "Sorceress.h"
#include "Priest.h"
#include "Knight.h"
#include "Berserk.h"
#include "Warrior.h"
#include "Character.h"
#include <iostream>
#include <vector>

using namespace std;

class CharacterTest
{
public:
	CharacterTest();
	~CharacterTest();
};

CharacterTest::CharacterTest() {
	int score = 12;
	cout << "Character tests passed: ";

	vector<Character*> party = { new Sorceress(), new Priest(), new Knight(), new Berserk() };
	party[3]->attack(party[2]);
	party[1]->attack(party[3]);
	party[3]->attack(party[1]);
	party[2]->attack(party[0]);

	if (party[2]->hp != 180)
		score--;

	if (party[3]->hp != 150)
		score--;

	if (party[1]->hp != 80)
		score--;

	if (party[0]->hp != 60)
		score--;

	party = { new Sorceress(), new Priest(), new Knight(), new Berserk() };
	party[0]->cast(party[2]);
	party[1]->cast(party[3]);
	party[3]->cast(party[1]);
	party[2]->cast(party[0]);

	if (party[2]->hp != 180)
		score--;

	if (party[3]->hp != 125)
		score--;

	if (party[1]->hp != 125)
		score--;

	if (party[0]->hp != 100)
		score--;

	party = { new Sorceress(), new Priest(), new Knight(), new Berserk() };
	party[2]->special(party[0]);
	party[3]->special(party[0]);
	party[0]->special(party[2]);
	party[1]->special(party[2]);

	if (party[0]->def != 0)
		score--;

	if (party[2]->hp != 60)
		score--;
	cout << score << "/" << "12" << endl;

	score = 2;

	Character* k = new Knight();
	Character* s = new Sorceress();

	if (*k < *s || !(*k > *s))
		score--;

	if (!(*k > *s) || *k < *s)
		score--;

	cout << "Operator overloading tests passed: " << score << "/" << 2 << endl;;
}

CharacterTest::~CharacterTest() {

}
