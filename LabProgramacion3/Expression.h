#pragma once
#include <string>
using namespace std;

class Expression
{
public:
	Expression();
	virtual int getValue();

	static string* split(string, char);
	static string Trim(string);
	
	static bool isNumber( string);
	static bool isAddittion(string);
	static bool isSubstraction(string);
	static bool isMultiplication (string);
	static bool isDivision(string);

	static Expression* fromString(string);
	virtual string Stringify();
};
