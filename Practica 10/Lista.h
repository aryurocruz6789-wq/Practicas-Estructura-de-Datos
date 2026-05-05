#ifndef LISTA_H
#define LISTA_H

#include <list>

using namespace std;

class ManejadorLista {
private:
   
    list<int>* miLista;

public:
    ManejadorLista();  
    ~ManejadorLista(); 

    void insertarInicio(int valor);
    void insertarFinal(int valor);
    void eliminarValor(int valor);
    void mostrarLista();
    bool estaVacia();
    int obtenerTamano();
};

#endif
