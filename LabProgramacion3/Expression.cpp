
#include "Expression.h"
#include "Number.h"
#include "Addition.h"
#include "Substraction.h"
#include "Division.h"
#include "Multiplication.h"
#include <string>
using namespace std;

Expression::Expression()
{

}

int Expression::getValue()
{
	return 0;
} 
 
string Expression::Trim(string _operacion) {

	int espacio;
	int aux;

	for (int i = 0; i < _operacion.size(); i++) {
		if (_operacion[i] == ' ') {
			espacio = i;
			aux = i;
			while (_operacion[aux] == ' ' && aux < (_operacion.size()) - 1) aux++;
			_operacion[espacio] = _operacion[aux];
			_operacion[aux] = ' ';
		}
	}
	return _operacion;
} 
 
string* Expression::split(string _operacion, char _signo) {

	int indice = -1;
	string* operadores = new string[2];
	operadores[0] = "";
	operadores[1] = "";

	for (int i = 0; i < _operacion.size(); i++) {
		if (_operacion[i] == _signo) {
			indice = i;
			break;
		}
	}
	for (int i = 0; i < _operacion.size(); i++) {
		if (i < indice) {
			operadores[0] += _operacion[i];
		}
		else if(i > indice) {
			operadores[1] += _operacion[i];
		}
	}
	return operadores;
}

bool Expression::isNumber(string _operacion) {
	int b = 0;
	int i = 0;
	do {
		if (_operacion[i] == '+'|| _operacion[i] == '-' || _operacion[i] == '*' || _operacion[i] == '/') {
			return false;
		}
		i++;
	} while (i < _operacion.size());
	return true;
}

bool Expression::isAddittion(string _operacion) {

	for (char op : _operacion) {
		if (op == '+')
			return true;
	}
	return false;
}

bool Expression::isSubstraction(string _operacion) {

	for (char op : _operacion) {
		if (op == '-')
			return true;
	}
	return false;
}

bool Expression::isMultiplication(string _operacion) {

	for (char op : _operacion) {
		if (op == '*')
			return true;
	}
	return false;
}

 bool Expression::isDivision(string _operacion) {

	for (char op : _operacion) {
		if (op == '/')
			return true;
	}
	return false;
}

 Expression* Expression::fromString(string _operacion) {

	_operacion =Trim(_operacion); //2+2*3-4/2
	
	if (isNumber(_operacion)) {

		int i = atoi(_operacion.c_str());
		return new Number(i);
	}
	else if (isAddittion(_operacion)) {

		string* operando = split(_operacion, '+');
		string izq = operando[0];
		string der = operando[1];
		
		return new Addition(fromString(izq), fromString(der));
	}
	else if (isSubstraction(_operacion)) {

		string* operando = split(_operacion, '-');
		string izq = operando[0];
		string der = operando[1];

		return new Substraction (fromString(izq), fromString(der));
	}
	else if (isMultiplication(_operacion)) {

		string* operando = split(_operacion, '*');
		string izq = operando[0];
		string der = operando[1];

		return new Multiplication(fromString(izq), fromString(der));
	}
	else if (isDivision(_operacion)) {

		string* operando = split(_operacion, '/');
		string izq = operando[0];
		string der = operando[1];
		
		return new Division(fromString(izq), fromString(der));
	}
}

 string Expression::Stringify() {
	 return " ";
 }