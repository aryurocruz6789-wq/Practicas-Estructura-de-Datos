#include "Pila.h"
#include <iostream>

using namespace std;

ManejadorPila::ManejadorPila() {
    miPila = new stack<int>();
}

ManejadorPila::~ManejadorPila() {
    delete miPila;
}

void ManejadorPila::apilar(int valor) {
    miPila->push(valor);
    cout << "Valor " << valor << " agregado al tope." << endl;
}

void ManejadorPila::desapilar() {
    if (!estaVacia()) {
        cout << "Sacando del tope: " << miPila->top() << endl;
        miPila->pop();
    } else {
        cout << "Error: La pila esta vacia." << endl;
    }
}

void ManejadorPila::mostrarTope() {
    if (!estaVacia()) {
        cout << "Elemento en el tope: " << miPila->top() << endl;
    }
}

void ManejadorPila::mostrarTodo() {
    if (estaVacia()) {
        cout << "Pila vacia." << endl;
        return;
    }


    stack<int> temp = *miPila;
    cout << "Contenido de la Pila (Tope -> Base):" << endl;
    while (!temp.empty()) {
        cout << "| " << temp.top() << " |" << endl;
        temp.pop();
    }
    cout << " -----" << endl;
}

bool ManejadorPila::estaVacia() {
    return miPila->empty();
}

int ManejadorPila::obtenerTamano() {
    return miPila->size();
}
