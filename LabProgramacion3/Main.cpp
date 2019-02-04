#include "pch.h"
#include <iostream>
#include <string>
#include "Number.h";
#include "Addition.h"
#include "Division.h"
#include "Multiplication.h"
using namespace std;
int main()
{
	Number x(1);
	Number y(2);
	Number z(3);
	Multiplication f(&y, &z);

	Addition g(&x, &f);

	cout << g.getValue() << endl;


}