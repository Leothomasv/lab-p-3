

#include "Number.h"

Number::Number(int value)
{
	this->value = value;
}
int Number::getValue()
{
	return this->value;
}

Number Number::operator+(Number x)
{
	Number result(this->getValue() + x.getValue());
	return result;
}

Number Number::operator-(Number x)
{
	Number result(this->getValue() - x.getValue());
	return result;
}

//Nuevos operadores

Number Number::operator*(Number x)
{
	Number result(this->getValue() * x.getValue());
	return result;
}

Number Number::operator/(Number x)
{
	Number result(this->getValue() / x.getValue());
	return result;
}

//Stringify
string Number::Stringify() {

	string num = to_string(this->getValue());
	return num;
}