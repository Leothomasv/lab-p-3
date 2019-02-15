
#include <iostream>
#include <string>
#include <conio.h>
//Clases
#include "Number.h"
#include "Addition.h"
#include "Division.h"
#include "Multiplication.h"
using namespace std;
int main()
{
	Number x(2);
	Number y(2);
	Number z(3);
	Multiplication f(&y, &z);

	Addition g(&x, &f);

	cout << "[" << Multiplication(new Number(8), &g).getValue() <<"]"<< endl;

	_getch();

}