#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola() {
    frente = 0;
    final = -1;
    contador = 0;
}

bool Cola::estaVacia() { return contador == 0; }
bool Cola::estaLlena() { return contador == MAX; }

void Cola::insertar(int valor) {
    if (estaLlena()) {
        cout << "[ERROR] Cola llena. No se puede insertar el " << valor << endl;
    } else {
        final = (final + 1) % MAX; // Movimiento circular
        datos[final] = valor;
        contador++;
        cout << "[OK] " << valor << " entro a la fila." << endl;
    }
}

void Cola::eliminar() {
    if (estaVacia()) {
        cout << "[ERROR] Cola vacia. Nadie a quien atender." << endl;
    } else {
        cout << "[OK] Atendiendo y eliminando a: " << datos[frente] << endl;
        frente = (frente + 1) % MAX; // Movimiento circular
        contador--;
    }
}

int Cola::verFrente() {
    if (!estaVacia()) return datos[frente];
    return -1;
}
