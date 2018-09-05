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
    string archivo = argv[1];
    //string archivo = "ejemploXML.xml";
    Fichero fichero(archivo);
    fichero.leerArchivo();


    return 0;
}