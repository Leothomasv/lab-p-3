
//template<class T>
//class Comparador {
//public:
//	T first;
//	T second;
//
//	Comparador(T, T);
//
//	T getMayor();
//};
//
//template<class T>
//Comparador<T>::Comparador(T first, T second) {
//	this->first = first;
//	this->second = second;
//}
//template<class T>
//T Comparador<T>::getMayor() {
//	return first > scond ? first : second;
//}
//
//int main() {
//
//	
//	Comparador<int> comparador(2, 3);
//	return 0;
//}

#include "stdafx.h"
#include <iostream>
#include "Cat.h"
using namespace std;

void porValor(int x) {
	cout << &x << endl;
}
void porReferencia(int* x, int y) {
	cout << x << endl;
	*x = y;
}

void porReferencia2(int& x, int y) {
	cout << x << endl;
	x = y;
}

void inicializar(Cat* cat, string nombre, int edad) {
	cat->age = edad;
	cat->name = nombre;
}

struct Persona {
	char nombre[32];
	char id[32];
	int edad;
	char tipoDeSangre;
};

void bufferTest() {
	Persona juan;
	char buffer[69];
	string d;

	char* nombre = "Juan Ramon Lopez Arellano";
	char* id = "0501-1234-4321";
	char tipoDeSangre = 'O';
	int edad = 256;
	memcpy(buffer, nombre, 32);
	memcpy(buffer + 32, id, 32);
	memcpy(buffer + 64, &edad, 4);
	memcpy(buffer + 68, &tipoDeSangre, 1);

	memcpy(&juan, buffer, 69);
	cout << juan.nombre << endl;
}

template <class T>
class Comparador {
public:
	T first;
	T second;
	Comparador(T, T);
	T getMayor();
};

template <class T>
Comparador<T>::Comparador(T first, T second) {
	this->first = first;
	this->second = second;
}

template <class T>
T Comparador<T>::getMayor() {
	return first > second ? first : second;
}

int main()
{
	Cat first = Cat(21, "Garfield");
	Cat second = Cat(16, "Kitty");
	Comparador<Cat> comparador(first, second);
	Cat mayor = comparador.getMayor();

	cout << mayor.name << endl;
	return 0;
}