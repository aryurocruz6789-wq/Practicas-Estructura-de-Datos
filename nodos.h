#include "Nodo.h"
#include <iostream>

void conectarNodos(Nodo* origen, Nodo* destino) {
    if (origen != nullptr) {
        origen->siguiente = destino;
    }
}

void mostrarDatoSiguiente(Nodo* actual) {
    if (actual != nullptr && actual->siguiente != nullptr) {
        std::cout << "Dato del nodo siguiente: " << actual->siguiente->dato << std::endl;
    }
}
