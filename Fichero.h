//
// Created by jimmy on 21/08/18.
//

#ifndef PRUEBA_FICHERO_H
#define PRUEBA_FICHERO_H

#include <string>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <fstream>
#include "Diccionario.h"

using namespace std;

class Fichero {
public:
    Fichero();
    void leerArchivo(string s);
    void opcional(string);

private:
    string nArchivo;
    Diccionario diccionario;

};


#endif //PRUEBA_FICHERO_H
