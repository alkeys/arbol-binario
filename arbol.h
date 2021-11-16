#ifndef ARBOL_H
#define ARBOL_H
typedef int dato;

struct arbol{
dato Dato;
int pos_izq;
int pos_der;
struct arbol *izq;
struct arbol *der;
};

struct arbol *nuevoNodo(dato Dato);
void insertar(struct arbol *nodo, int dato);
void mostrar (struct arbol *arbolNodo);
int posDeN(struct arbol *arbolNodo,dato dat);



#endif /* ARBOL_H */

