//
// Created by jimmy on 21/08/18.
//

#ifndef PRUEBA_DICCIONARIO_H
#define PRUEBA_DICCIONARIO_H
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class Diccionario {
    struct Caja{
    public:
        string elem;
        int numApariciones;
        Caja* sgt;
        Caja(){
            sgt = nullptr;
            elem = "";
            numApariciones = 0;
        }
        Caja(string elmt){
            elem = elmt;
            numApariciones = 0;
            sgt = nullptr;
        }

        void setElem(string nE){
            elem = nE;
        }

    };
    
public:
        //Efecto:
        //Requiere:
        //Modifica:
        void crear();
        //Efecto:
        //Requiere:
        //Modifica:
        void destruir();

        //Efecto:
        //Requiere:
        //Modifica:
        void agregar(string);

        void ordenar();

    private:
        Caja *primero;
        int numElem;
};

#endif //PRUEBA_DICCIONARIO_H
