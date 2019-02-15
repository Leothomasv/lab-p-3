#include "stdafx.h"
#include "Animal.h"



Animal::Animal()
{
}

Animal::Animal(int age, string name)
{
	this->age = age;
	this->name = name;
}

string Animal::growl() {
	return "";
}

Animal::~Animal()
{
}