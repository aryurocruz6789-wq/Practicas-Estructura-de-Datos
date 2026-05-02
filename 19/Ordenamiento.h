#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

class Ordenamiento {
private:
    int* reales;
    int** punteros;
    int n;

public:
    Ordenamiento(int datos[], int tam);
    void burbujaIndirecta();
    void imprimirIndirecto();
};

#endif
