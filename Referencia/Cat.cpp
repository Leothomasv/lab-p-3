#include "stdafx.h"
#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat() {
	this->age = 0;
	this->name = "";
}

Cat::Cat(int age, string name) : Animal(age, name) {
}

Cat Cat::operator +(Cat cat)
{
	Cat offspring;
	offspring.age = 0;
	offspring.name = this->name + " " + cat.name;
	return offspring;
}

bool Cat::operator>(Cat cat)
{
	return this->age > cat.age;
}

Cat Cat::operator ++()
{
	Cat cat(this->age + 1, this->name);
	return cat;
}

string Cat::growl()
{
	return "meow";
}