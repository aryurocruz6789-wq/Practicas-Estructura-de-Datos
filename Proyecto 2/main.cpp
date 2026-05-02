#include <iostream>
#include "Pila.h"


void inicializar(Pila &p);
bool estaVacia(Pila p);
bool estaLlena(Pila p);
void push(Pila &p, int valor);
void pop(Pila &p);
void mostrarPosicion(Pila p);

int main() {
    Pila miPila;
    inicializar(miPila);

    push(miPila, 10);
    push(miPila, 20);
    push(miPila, 30);

    mostrarPosicion(miPila);

    pop(miPila);
    mostrarPosicion(miPila);

    return 0;
}

