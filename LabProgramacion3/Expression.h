#pragma once
#include <string>
using namespace std;

class Expression
{
public:
	Expression();
	virtual int getValue();

	string split(string, char);
	string Trim(string);

	
};
