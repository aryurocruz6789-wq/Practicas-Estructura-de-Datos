#include "PilaDinamica.h"
#include <iostream>

void inicializar(Pila &p) {
    p.tope = nullptr;
}

bool estaVacia(Pila p) {
    return p.tope == nullptr;
}

bool estaLlena(Pila p) {
    return false; 
}

void push(Pila &p, int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = p.tope;
    p.tope = nuevoNodo;
}

void pop(Pila &p) {
    if (!estaVacia(p)) {
        Nodo* temporal = p.tope;
        p.tope = p.tope->siguiente;
        delete temporal;
    }
}

void mostrarPosicion(Pila p) {
    if (!estaVacia(p)) {
        std::cout << "Dato en tope: " << p.tope->dato << std::endl;
        std::cout << "Direccion: " << p.tope << std::endl;
    }
}
