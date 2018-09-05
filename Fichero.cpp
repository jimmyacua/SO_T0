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
    ifstream fichero;
    fichero.open(nArchivo.c_str());
    if(!fichero.fail()){
        while(!fichero.eof()){
            string linea;
            getline(fichero, linea);
            string::iterator it = linea.begin();
            string::iterator aux;
            for(it; it != linea.end(); it++){
                if(*it == '<'){
                    aux = it;
                    string palabra;
                    while(*aux != ' ' && *aux != '>') {
                        palabra += *aux;
                        aux++;
                    }
                    diccionario.agregar(palabra);
                }
            }
        }
        fichero.close();
    }
   diccionario.ordenar();
}
