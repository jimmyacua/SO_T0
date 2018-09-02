#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

#include "Fichero.h"

using namespace std;

int main() {
    /*string archivo = "";
    for(int i=0; i<argv.length; i++){
        archivo += argv[i];
    }*/
    Fichero fichero("ejemploXML");
    fichero.leerArchivo();

    return 0;
}