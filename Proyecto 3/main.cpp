#include "PilaDinamica.h"

int main() {
    Pila miPila;
    inicializar(miPila);

    push(miPila, 100);
    push(miPila, 200);
    mostrarPosicion(miPila);

    pop(miPila);
    mostrarPosicion(miPila);

    return 0;
}
