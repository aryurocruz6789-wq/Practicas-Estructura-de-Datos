#include <iostream>
#include "Nodo.h"

// Prototipos de funciones definidas en Nodo.cpp
void conectarNodos(Nodo* origen, Nodo* destino);
void mostrarDatoSiguiente(Nodo* actual);

int main() {
    Nodo* n1 = new Nodo;
    Nodo* n2 = new Nodo;

    n1->dato = 10;
    n2->dato = 20;
    
    n1->siguiente = nullptr;
    n2->siguiente = nullptr;

    conectarNodos(n1, n2);

    std::cout << "Dato N1: " << n1->dato << std::endl;
    mostrarDatoSiguiente(n1);

    delete n1;
    delete n2;

    return 0;
}
