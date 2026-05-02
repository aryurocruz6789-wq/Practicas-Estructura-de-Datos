#ifndef PILADINAMICA_H
#define PILADINAMICA_H

struct Nodo {
    int dato;
    Nodo* siguiente;
};

struct Pila {
    Nodo* tope;
};

void inicializar(Pila &p);
bool estaVacia(Pila p);
bool estaLlena(Pila p);
void push(Pila &p, int valor);
void pop(Pila &p);
void mostrarPosicion(Pila p);

#endif
