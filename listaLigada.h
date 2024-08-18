#ifndef LISTALIGADA_H
#define LISTALIGADA_H

#include "nodo.h"

class ListaLigada{
private:
    Nodo *cabeza; 

    Nodo *split(Nodo *head);

    Nodo *merge(Nodo *left, Nodo *right);

    Nodo *mergeSortRec(Nodo *head);

public:
    //Constructor
    ListaLigada();

    //Destructor
    ~ListaLigada();

    //Metodo para agregar un nodo al final de lista
    void agregar(const Producto &producto);

    //Metodo para imprimir todos los nodos de la lista
    void imprimir() const;

    //Metodo par intercambiar 2 nodos si el primero es mayor
    void swap(Nodo *nodo1, Nodo *nodo2);

    //Metodo para ordenar la lista con burbuja
    void ordenarBurbuja();

    //Metodo para ordenar la lista con Merge Sort
    void mergeSort();

};

#endif