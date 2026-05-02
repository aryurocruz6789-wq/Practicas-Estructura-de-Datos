#include "ColaDinamica.h"

ColaDinamica::ColaDinamica() {
    frente = NULL;
    final = NULL;
}

void ColaDinamica::enqueue(int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (estaVacia()) {
        frente = nuevoNodo;
    } else {
        final->siguiente = nuevoNodo;
    }
    final = nuevoNodo;
    cout << "Elemento " << valor << " agregado a la cola.\n";
}

void ColaDinamica::dequeue() {
    if (estaVacia()) {
        cout << "Error: La cola esta vacia.\n";
        return;
    }
    Nodo* temporal = frente;
    int valorEliminado = temporal->dato;
    
    frente = frente->siguiente;
    
    if (frente == NULL) {
        final = NULL;
    }

    delete temporal;
    cout << "Elemento " << valorEliminado << " ha salido de la cola.\n";
}

bool ColaDinamica::estaVacia() {
    return frente == NULL;
}

void ColaDinamica::mostrarFrente() {
    if (!estaVacia()) {
        cout << "Primer elemento en espera (frente): " << frente->dato << "\n";
    } else {
        cout << "La cola esta vacia.\n";
    }
}

ColaDinamica::~ColaDinamica() {
    while (!estaVacia()) {
        dequeue();
    }
}
