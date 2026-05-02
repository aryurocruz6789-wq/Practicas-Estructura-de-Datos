#ifndef PILADINAMICA_H
#define PILADINAMICA_H

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class PilaDinamica {
private:
    Nodo* tope;
public:
    PilaDinamica();
    ~PilaDinamica();
    void push(int valor);
    void pop();
    bool estaVacia();
    void mostrarTope();
};

#endif
