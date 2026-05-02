#ifndef COLA_H
#define COLA_H

#define MAX 5

class Cola {
private:
    int datos[MAX];
    int frente;
    int final;
    int contador; // Para saber exactamente cuántos hay

public:
    Cola();
    void insertar(int valor); // Enqueue
    void eliminar();          // Dequeue
    int verFrente();
    bool estaVacia();
    bool estaLlena();
};

#endif

