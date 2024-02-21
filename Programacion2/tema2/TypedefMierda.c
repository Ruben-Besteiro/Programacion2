#include <stdio.h>

typedef struct {
	long long int numeroHojas;
	int numeroRamas;
	short numeroRaices;
	char nombre[10];
} arbol_XD;

arbol_XD introduceDetalles();
void presentarArbol(arbol_XD arbol);

arbol_XD introduceDetalles() {				// struct introduceDetalles()
	arbol_XD nuevoArbol;					// struct nuevoArbol
	printf("Mete un numero: ");
	scanf("%lld", &nuevoArbol.numeroHojas);
	return nuevoArbol;
}

void presentarArbol(arbol_XD arbol) {
	printf("El numero de hojas del primer arbol es %lld", arbol.numeroHojas);
}

void main() {
	arbol_XD miArbol;
	
	miArbol = introduceDetalles();
	presentarArbol(miArbol);
}