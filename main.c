#include <stdio.h>
#include <stdlib.h>

#include "arbol.h"
int main(int argc, char** argv) {
    struct arbol *mi_arbol;
    mi_arbol=nuevoNodo(10);
    insertar(mi_arbol,11);
    insertar(mi_arbol,12);
    insertar(mi_arbol,9);
    posDeN(mi_arbol,12);
    
    return (EXIT_SUCCESS);
}

