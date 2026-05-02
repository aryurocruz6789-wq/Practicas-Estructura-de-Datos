#ifndef LISTA_H
#define LISTA_H

#define MAX 10 // Capacidad para 10 elementos

class Lista {
private:
    int datos[MAX];
    int tamano;

public:
    Lista();
    bool estaVacia();
    bool estaLlena();
    void insertar(int posicion, int valor);
    void eliminar(int posicion);
    void mostrar();
};

#endif
