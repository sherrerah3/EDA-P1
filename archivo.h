#ifndef ARCHIVOH
#define ARCHIVO_H

#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>  // Para std::rand y std::srand
#include <ctime>    // Para std::time
#include <iomanip>  // Para std::setw y std::setfill
using namespace std;

class Archivo{
private:
    vector<string> items;

public:
    //Constructor
    Archivo();

    //Metodo para leer items desde un archivo
    void leerDesdeArchivo(const string &nombreArchivo);

    //Metodo para imprimir los items
    void imprimirItems() const;

    //Metodo para retornar un item aleatorio
    string obtenerItemAleatorio() const;

    //Metodo para generar un numero entero aleatorio
    int generarNumEntero(int min, int max) const;

    //Metodo para generar fecha aleatoria
    string fechaAleatoria(int añoInicial, int fechaTope) const;

};


#endif //ARCHIVO_H