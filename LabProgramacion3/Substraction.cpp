
#include "Substraction.h"


Substraction::Substraction(Expression *e, Expression *i) :ArithmeticExpression(e, i)
{

}

int Substraction::getValue()
{
	return e->getValue() - i->getValue();
}

string Substraction::Stringify() {
	return this->e->Stringify() + "-" + this->i->Stringify();
}