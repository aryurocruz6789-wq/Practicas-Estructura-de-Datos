#ifndef COLADINAMICA_H
#define COLADINAMICA_H

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class ColaDinamica {
private:
    Nodo* frente;
    Nodo* final;
public:
    ColaDinamica();
    ~ColaDinamica();
    void enqueue(int valor); // Insertar
    void dequeue();         // Eliminar
    bool estaVacia();
    void mostrarFrente();
};

#endif
