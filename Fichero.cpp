//
// Created by jimmy on 21/08/18.
//

#include <cstring>
#include "Fichero.h"

Fichero::Fichero(string s) {
    nArchivo = s;
    diccionario.crear();
}

void Fichero::leerArchivo() {
    char cadena[128];
    ifstream fichero;
    fichero.open(nArchivo.c_str());
    if(!fichero.fail()){
        while(!fichero.eof()){
            fichero.getline(cadena,128);
            for(int i=0; i < 128; i++){
                if(cadena[i] == 32 || cadena[i] == 62){ //32 es el ascii del espacio y 62 de >
                    cadena[i] = 10; // 10 es el ascii de \n
                }
                if(cadena[i] == 60 && cadena[i] == 47){ //60 es el ascii de < y 47 de /
                    cadena[i-1] = 10; // 10 es el ascii de \n
                }
            }
            for(int i = 0; i<128; i++) {
                if (cadena[i] == 60) { //60 es el ascii de <
                    int pos = i;
                    string s = "";
                    while (cadena[pos] != 10) {
                        s += cadena[pos];
                        pos++;
                    }
                    s += ">";
                    i = pos;
                    diccionario.agregar(s);
                }
            }
            //cout << cadena << endl;
        }
        fichero.close();
    }
    diccionario.ordenar();
}

