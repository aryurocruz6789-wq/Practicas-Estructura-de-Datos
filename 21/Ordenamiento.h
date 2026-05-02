#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

class Ordenamiento {
private:
    int* datos;
    int** punteros;
    int n;

    void intercambiarPunteros(int** a, int** b);
    int particionIndirecta(int bajo, int alto);
    void qSortIndirecto(int bajo, int alto);

public:
    Ordenamiento(int arreglo[], int tamano);
    ~Ordenamiento();
    void ordenar();
    void imprimirIndirecto();
};

#endif
