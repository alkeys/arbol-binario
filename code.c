#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int pos;

struct arbol *nuevoNodo(dato Dato){
struct arbol *nodo=(struct arbol*)malloc(sizeof(struct arbol));
nodo->Dato=Dato;
nodo->der=nodo->izq=NULL;
nodo->pos_der=nodo->pos_izq=0;
return nodo;
}


void insertar(struct arbol *nodo, int dato) {
    // ¿Izquierda o derecha?
    // Si es mayor va a la derecha
    if (dato > nodo->Dato) {
        // Tienes espacio a la derecha?
        if (nodo->der == NULL) {
            nodo->der = nuevoNodo(dato);
            nodo->pos_der=nodo->pos_der+1;
        } else {
            // Si la derecha ya está ocupada, recursividad hasta encontar espacio ;)
            insertar(nodo->der, dato);
        }
    } else {
        // Si no, a la izquierda
        if (nodo->izq == NULL) {
            nodo->izq = nuevoNodo(dato);
            nodo->pos_izq=nodo->pos_izq+1;
        } else {
            // Si la izquierda ya está ocupada, recursividad )
            insertar(nodo->izq, dato);
        }
    }
}


void mostrar (struct arbol *arbolNodo)
{
  if (arbolNodo == NULL)
    {
      return;
    }
  printf (" %d", arbolNodo->Dato);
  mostrar (arbolNodo->der);
  mostrar (arbolNodo->izq);
}


int posDeN(struct arbol *arbolNodo,dato dat){
    if(dat==arbolNodo->Dato){
        printf("encontrado %d",pos);
    }
    if(dat > arbolNodo->Dato){
        pos++;
        posDeN(arbolNodo->der,dat);
    }else if(dat < arbolNodo->Dato){
        pos++;
        posDeN(arbolNodo->izq,dat);
    }
}