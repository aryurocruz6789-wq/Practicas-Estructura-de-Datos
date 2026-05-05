#ifndef PILA_H
#define PILA_H

#include <stack>

using namespace std;

class ManejadorPila {
private:
    
    stack<int>* miPila;

public:
    ManejadorPila();  
    ~ManejadorPila(); 

    void apilar(int valor);   
    void desapilar();         
    void mostrarTope();       
    void mostrarTodo();       
    bool estaVacia();
    int obtenerTamano();
};

#endif
