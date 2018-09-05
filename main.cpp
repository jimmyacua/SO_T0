#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include "Fichero.h"

/*
 * Compilar usando "g++ Diccionario.cpp Fichero.cpp main.cpp" (sin las comillas)
 * y ejecutar el programa con "./a.out ejemploXML.xml" (sin las comillas)
 */

using namespace std;

int main(int argc, char *argv[]) {
    Fichero fichero;
    if(argv[2] == "-t") {
        cout << argv[1] << endl;
        //fichero.opcional(nombre);
    }
    else {
        string archivo = argv[1];
        fichero.leerArchivo(archivo);
    }

    return 0;
}