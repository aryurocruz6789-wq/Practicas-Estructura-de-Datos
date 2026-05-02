#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {
    tamano = 0;
}

bool Lista::estaVacia() { return tamano == 0; }
bool Lista::estaLlena() { return tamano == MAX; }

void Lista::insertar(int posicion, int valor) {
    if (estaLlena()) {
        cout << "[ERROR] Lista llena." << endl;
        return;
    }
    if (posicion < 0 || posicion > tamano) {
        cout << "[ERROR] Posicion invalida." << endl;
        return;
    }

    
    for (int i = tamano; i > posicion; i--) {
        datos[i] = datos[i - 1];
    }

    datos[posicion] = valor;
    tamano++;
    cout << "[OK] " << valor << " insertado en la posicion " << posicion << endl;
}

void Lista::eliminar(int posicion) {
    if (estaVacia() || posicion < 0 || posicion >= tamano) {
        cout << "[ERROR] No se puede eliminar en esa posicion." << endl;
        return;
    }

    cout << "[OK] Eliminando el valor: " << datos[posicion] << endl;

    // Desplazar elementos a la izquierda para tapar el hueco
    for (int i = posicion; i < tamano - 1; i++) {
        datos[i] = datos[i + 1];
    }
    tamano--;
}

void Lista::mostrar() {
    if (estaVacia()) {
        cout << "La lista esta vacia." << endl;
        return;
    }
    cout << "LISTA ACTUAL: ";
    for (int i = 0; i < tamano; i++) {
        cout << "[" << i << "]:" << datos[i] << "  ";
    }
    cout << endl;
}
