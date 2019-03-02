
#include "Multiplication.h"


Multiplication::Multiplication(Expression *e, Expression *i) :ArithmeticExpression(e, i)
{

}


int Multiplication::getValue()
{
	return e->getValue()*i->getValue();
}

string Multiplication::Stringify() {
	return "(" + this->e->Stringify() + "*" + this->i->Stringify() + ")";
}