#include "Pila.h"
#include <iostream>

void inicializar(Pila &p) {
    p.tope = -1;
}

bool estaVacia(Pila p) {
    return p.tope == -1;
}

bool estaLlena(Pila p) {
    return p.tope == MAX - 1;
}

void push(Pila &p, int valor) {
    if (estaLlena(p)) {
        std::cout << "Error: Pila llena." << std::endl;
    } else {
        p.tope++;
        p.datos[p.tope] = valor;
    }
}

void pop(Pila &p) {
    if (estaVacia(p)) {
        std::cout << "Error: Pila vacia." << std::endl;
    } else {
        std::cout << "Eliminado: " << p.datos[p.tope] << std::endl;
        p.tope--;
    }
}

void mostrarPosicion(Pila p) {
    if (estaVacia(p)) {
        std::cout << "La pila esta vacia." << std::endl;
    } else {
        std::cout << "Posicion actual (tope): " << p.tope << std::endl;
        std::cout << "Valor en el tope: " << p.datos[p.tope] << std::endl;
    }
}
