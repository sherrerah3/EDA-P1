#include "archivo.h"
#include <iostream>
//using namespace std;

// Constructor
Archivo::Archivo(){
    // Inicializar la semilla para números aleatorios
    srand(static_cast<unsigned int>(time(nullptr))); 
}

// Metodo para leer textos desde archivo
void Archivo::leerDesdeArchivo(const string &nombreArchivo){
    ifstream archivo(nombreArchivo);
    if(archivo.is_open()){
        string texto;
        while(getline(archivo, texto)){
            items.push_back(texto);
        }
        archivo.close();
    } else {
        cerr << "No se pudo abrir el archivo: " << nombreArchivo << endl;
    }
}

// Metodo para imprimir los items
void Archivo::imprimirItems() const{
    int i = 1;
    for (const auto &item : items){
        cout << "[" << i << "]: " << item << endl;
        i = i + 1;
    }
    cout << endl;
}

//Metodo para retornar un item aleatorio
string Archivo::obtenerItemAleatorio() const{
    if(items.empty()){
        return "No hay nombre en la lista.";
    }
    int indiceAleatorio = rand() % items.size();
    return items[indiceAleatorio];
}

//Metodo para generar un numero entero aleatorio
int Archivo::generarNumEntero(int min, int max) const{
    return min + rand() % (max - min + 1);
}

//Metodo para generar fecha aleatoria
string Archivo::fechaAleatoria(int añoInicial, int fechaTope) const{
    int año = añoInicial + rand() % (fechaTope - añoInicial);
    int mes = 1 + rand() % 12;
    int dia = 1 + rand() % 28; 

    stringstream ss;
    ss  << setw(2) << setfill('0') << dia << "/"
        << setw(2) << setfill('0') << mes << "/"
        << año;
    return ss.str();
}   


