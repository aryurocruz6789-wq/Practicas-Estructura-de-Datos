#include "PilaDinamica.h"

PilaDinamica::PilaDinamica() {
    tope = NULL;
}

void PilaDinamica::push(int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = tope;
    tope = nuevoNodo;
    cout << "Elemento " << valor << " insertado correctamente.\n";
}

void PilaDinamica::pop() {
    if (estaVacia()) {
        cout << "Error: Pila vacia.\n";
        return;
    }
    Nodo* temporal = tope;
    int valorEliminado = temporal->dato;
    tope = tope->siguiente;
    delete temporal;
    cout << "Elemento " << valorEliminado << " sacado de la pila.\n";
}

bool PilaDinamica::estaVacia() {
    return tope == NULL;
}

void PilaDinamica::mostrarTope() {
    if (!estaVacia()) {
        cout << "Tope actual: " << tope->dato << "\n";
    } else {
        cout << "Pila vacia.\n";
    }
}

PilaDinamica::~PilaDinamica() {
    while (!estaVacia()) {
        pop();
    }
}
