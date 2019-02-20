
#include "Expression.h"

Expression::Expression()
{

}

int Expression::getValue()
{
	return 0;
} .

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

//string Expression::split(string _operacion, char _signo) {
//
//	for (int i = 0; i < _operacion.size(); i++) {
//		if (_operacion[i] == _signo) {
//
//		}
//	}
//}
