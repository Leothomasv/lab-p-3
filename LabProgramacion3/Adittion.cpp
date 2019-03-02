
#include "Addition.h"

Addition::Addition(Expression *x, Expression *y) :ArithmeticExpression(x, y)
{

}

int Addition::getValue()
{
	return e->getValue() + i->getValue();
}

string Addition::Stringify() {
	return this->e->Stringify() + "+" + this->i->Stringify();
}