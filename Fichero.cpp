//
// Created by jimmy on 21/08/18.
//

#include <cstring>
#include "Fichero.h"

Fichero::Fichero() {

}

void Fichero::leerArchivo(string s) {
    diccionario.crear();
    nArchivo = s;
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
                    aux = it+1;
                    string palabra;
                    while(*aux != ' ' && *aux != '>') {
                        palabra += *aux;
                        aux++;
                    }
                    it = aux;
                    diccionario.agregar(palabra);
                }
            }
        }
        fichero.close();
    }
    diccionario.ordenar();
    diccionario.destruir();
}

void Fichero::opcional(string nombre) {
    ofstream fs(nombre+".xml");
    fs << "hola" << endl;
    fs.close();
}
