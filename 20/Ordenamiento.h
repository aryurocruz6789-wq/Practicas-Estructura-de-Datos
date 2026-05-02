#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

class Ordenamiento {
private:
    int* datos;
    int** punteros;
    int n;

    void mergeIndirecto(int inicio, int medio, int fin);
    void mSortIndirecto(int inicio, int fin);

public:
    Ordenamiento(int arreglo[], int tamano);
    ~Ordenamiento();
    void ordenar();
    void imprimirIndirecto();
};

#endif
