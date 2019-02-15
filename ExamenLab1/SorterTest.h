#pragma once

#include <iostream>
#include "Sorceress.h"
#include <vector>
#include "Sorceress.h"
#include "Priest.h"
#include "Knight.h"
#include "Berserk.h"
#include "Warrior.h"
#include "Character.h"

class SorterTest
{
public:
	SorterTest();
	~SorterTest();
};


SorterTest::SorterTest()
{
	int score = 2;
	vector<int> numbers = { 6,2,4,1,3,9,8,7,5 };
	Sorter<int> sorter(numbers);
	sorter.sort();

	bool sorted = true;
	for (int i = 0; i < sorter.dataset.size(); i++)
	{
		if (i < sorter.dataset.size() - 1)
			if (sorter.dataset[i] > sorter.dataset[i + 1])
				sorted = false;
	}

	vector<Character> party = { Knight(), Priest(), Sorceress(), Berserk() };
	Sorter<Character> s2(party);
	s2.sort();

	sorted = true;
	for (int i = 0; i < s2.dataset.size(); i++)
	{
		if (i < s2.dataset.size() - 1)
			if (s2.dataset[i] > s2.dataset[i + 1])
				sorted = false;
	}

	if (!sorted)
		score--;

	cout << "Sorter Tests Passed: " << score << "/ 2" << endl;
}


SorterTest::~SorterTest()
{
}