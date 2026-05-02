#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class ListaDinamica {
private:
    Nodo* inicio;

public:
    ListaDinamica();
    ~ListaDinamica();
    void insertar(int valor);
    void eliminarInicio();
    void mostrarLista();
    bool estaVacia();
};

#endif
