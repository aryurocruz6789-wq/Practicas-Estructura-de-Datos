#include "Lista.h"
#include <iostream>

using namespace std;


ManejadorLista::ManejadorLista() {
    miLista = new list<int>();
}

ManejadorLista::~ManejadorLista() {
    delete miLista;
}

void ManejadorLista::insertarInicio(int valor) {
    miLista->push_front(valor);
}

void ManejadorLista::insertarFinal(int valor) {
    miLista->push_back(valor);
}

void ManejadorLista::eliminarValor(int valor) {
    if (!estaVacia()) {
        
        miLista->remove(valor);
    }
}

void ManejadorLista::mostrarLista() {
    if (estaVacia()) {
        cout << "La lista esta vacia." << endl;
        return;
    }


    list<int>::iterator it;
    cout << "Contenido de la Lista: " << endl;
    for (it = miLista->begin(); it != miLista->end(); ++it) {
        cout << "[" << *it << "] <-> ";
    }
    cout << "NULL" << endl;
}

bool ManejadorLista::estaVacia() {
    return miLista->empty();
}

int ManejadorLista::obtenerTamano() {
    return miLista->size();
}
