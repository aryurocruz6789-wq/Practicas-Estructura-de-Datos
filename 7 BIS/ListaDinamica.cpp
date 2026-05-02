#include "ListaDinamica.h"

ListaDinamica::ListaDinamica() {
    inicio = NULL;
}

void ListaDinamica::insertar(int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (estaVacia()) {
        inicio = nuevoNodo;
    } else {
        Nodo* temporal = inicio;
        while (temporal->siguiente != NULL) {
            temporal = temporal->siguiente;
        }
        temporal->siguiente = nuevoNodo;
    }
    cout << "Elemento " << valor << " agregado a la lista.\n";
}

void ListaDinamica::eliminarInicio() {
    if (estaVacia()) {
        cout << "La lista esta vacia.\n";
        return;
    }
    Nodo* temporal = inicio;
    inicio = inicio->siguiente;
    cout << "Eliminando dato: " << temporal->dato << endl;
    delete temporal;
}

bool ListaDinamica::estaVacia() {
    return inicio == NULL;
}

void ListaDinamica::mostrarLista() {
    if (estaVacia()) {
        cout << "Lista vacia." << endl;
        return;
    }
    Nodo* temporal = inicio;
    cout << "Contenido de la lista: ";
    while (temporal != NULL) {
        cout << "[" << temporal->dato << "] -> ";
        temporal = temporal->siguiente;
    }
    cout << "NULL" << endl;
}

ListaDinamica::~ListaDinamica() {
    while (!estaVacia()) {
        eliminarInicio();
    }
}
