#pragma once

#include <string>
#include "Animal.h"

using namespace std;


class Cat : public Animal {
public:
	Cat();
	Cat(int age, string name);

	Cat operator +(Cat cat);
	bool operator >(Cat cat);
	Cat operator ++();
	string growl();
};