#pragma once

#include <string>
using namespace std;

class Animal
{
public:
	Animal();
	Animal(int age, string name);
	int age;
	string name;
	virtual string growl();
	~Animal();
};

