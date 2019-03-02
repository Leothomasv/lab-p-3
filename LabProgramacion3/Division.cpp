

#include "Division.h"


Division::Division(Expression *e, Expression *i) :ArithmeticExpression(e, i)
{

}


int Division::getValue()
{
	return e->getValue() / i->getValue();
}

string Division::Stringify() {
	return "(" + this->e->Stringify() + "/" + this->i->Stringify() + ")";
}