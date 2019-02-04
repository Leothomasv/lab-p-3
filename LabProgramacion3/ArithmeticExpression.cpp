#include "pch.h"
#include "ArithmeticExpression.h"

int ArithmeticExpression::getValue()
{
	return 0;
}

ArithmeticExpression::ArithmeticExpression() {

}

ArithmeticExpression::ArithmeticExpression(Expression *x, Expression *y)
{
	this->e = x;
	this->i = y;

}
