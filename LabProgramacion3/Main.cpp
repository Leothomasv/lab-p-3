
#include <iostream>
#include <string>
#include <conio.h>

//Clases
#include "Number.h"
#include "Addition.h"
#include "Substraction.h"
#include "Division.h"
#include "Multiplication.h"
using namespace std;

//Listas

template <class T>
class Nodo {

public:
	T valor;
	Nodo* siguente;

	Nodo() :siguente(0) {};

	void agregar(T _valor, Nodo<T>** _nuevo) {
		Nodo<T>* aux = *_nuevo;
		if (*_nuevo == 0) {
			*_nuevo = new Nodo<T>;
			(*_nuevo)->valor = _valor;
		}
		else {
			agregar(_valor, &aux->siguente);
		}
	}

	bool eliminar(T _valor, Nodo<T>** _nuevo) {
		Nodo<T>* actual = *_nuevo;
		Nodo<T>* anterior = 0;
		if (*_nuevo == 0) {
			return false;
		}
		else {
			if (actual->valor == _valor) {
				if (actual == *_nuevo) {
					*_nuevo = (*_nuevo)->siguente;
				}
				else {
					anterior->siguiente = actual->siguiente;
					delete actual;
					return true;
				}
			}
			else {
				anterior = actual;
				eliminar(_valor, &actual->siguente);
			}
			
		}
	}

	T obtener(T _valor, Nodo<T>** _nuevo) {
		Nodo<T> *aux = *_nuevo;
		if (*_nuevo == 0) {
			cout << "Esta vacio";
		}
		else {
			if (aux->valor == _valor) {
				return aux->valor;
			}
			else {
				obtener(_valor, &aux->siguente);
			}
		}
		return 0;
	}

	void imprimir(Nodo<T>**_nuevo) {
		Nodo<T>* aux = *_nuevo;
		if (*_nuevo == 0) {
			cout << "esta vacia";
		}
		else {
			Nodo<T>* aux = *_nuevo;
			while (aux != 0) {
				cout << "|" << aux->valor << "|";
				aux = aux->siguente;
			}
		}
	}

};


int main()
{

	//Lista Tarea 2
	/*Nodo<int>* n1 = 0;
	Nodo<int> n;

	n.agregar(30, &n1);
	n.agregar(56, &n1);
	n.agregar(5, &n1);
	n.agregar(12, &n1);
	n.agregar(3, &n1);

	n.imprimir(&n1);

	cout << "\n";
	n.eliminar(30, &n1);
	cout << "\n";


	cout << "{" << n.obtener(30,&n1)<< "}";*/

	

	Multiplication m(&Number(2), &Number(3));
    Division d(&m, &Number(2));
    Addition a(&Number(4), &d);

    cout << a.Stringify();

	_getch();
}