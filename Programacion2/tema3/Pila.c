#include <stdio.h>
#include <stdlib.h>

void calcularTamano(int *ptamañopila);
void push(int *ptamañopila, int *puntero);
void pop(int *ptamañopila, int *puntero);
void leerUltimo(int *ptamañopila, int *puntero);
void vacia(int *ptamañopila);
void imprimirPila(int *ptamañopila, int *puntero);
void ir(int *puntero);

void main() {
	int *puntero;
	int a;
	puntero = &a;

	puntero = (int *) malloc(sizeof(int));
	int *ptamañopila;
	int tamañopila = 0;
	ptamañopila = &tamañopila;
	
	int opcion;
	do {
		printf("Pulsa 1 para calcular el tamano de la pila\n");
		printf("Pulsa 2 para anadir un numero a la pila\n");
		printf("Pulsa 3 para quitar el ultimo elemento de la pila\n");
		printf("Pulsa 4 para leer el ultimo elemento de la pila\n");
		printf("Pulsa 5 para ver si la pila esta vacia\n");
		printf("Pulsa 6 para recorrer toda la pila e imprimirla\n");
		printf("Pulsa 7 para ir\n");
	
	
		scanf("%d", &opcion);
		switch (opcion) {
			case 1: calcularTamano(ptamañopila);
			break;
			case 2: push(ptamañopila, puntero);
			break;
			case 3: pop(ptamañopila, puntero);
			break;
			case 4: leerUltimo(ptamañopila, puntero);
			break;
			case 5: vacia(ptamañopila);
			break;
			case 6: imprimirPila(ptamañopila, puntero);
			break;
			case 7: ir(puntero);
			break;
			default: printf("Eres tonto\n");
		}
	} while (opcion != 7);
}

void calcularTamano(int *ptamañopila) {
	printf("El tamano de la pila es %d\n", *ptamañopila);
}

void push(int *ptamañopila, int *puntero) {
	int intscanf;
	printf("Posicion actual: %d\n", *ptamañopila+1);
	
	do {
		printf("Introduce un numero: ");
		intscanf = scanf("%d", puntero+*ptamañopila);
		while(getchar() != '\n');
	} while (intscanf != 1);
	
	puntero = (int *) realloc(puntero, sizeof(int)*(*ptamañopila)+1);
	*(ptamañopila) += 1;
}

void pop(int *ptamañopila, int *puntero) {
	*(puntero+*ptamañopila-1) = 0;
	printf("El numero en la posicion %d ha sido borrado\n", *ptamañopila);
	*(ptamañopila) -= 1;
}

void leerUltimo(int *ptamañopila, int *puntero) {
	if (*ptamañopila == 0) {
		printf("No hay nada que leer\n");
	} else {
		printf("Numero %d: %d\n", *ptamañopila, *(puntero+(*ptamañopila-1)));
	}
}

void vacia(int *ptamañopila) {
	if (*ptamañopila == 0) {
		printf("La pila esta vacia\n");
	} else {
		printf("La pila no esta vacia\n");
	}
}

void imprimirPila(int *ptamañopila, int *puntero) {
	for (int i = 1; i <= *ptamañopila; i++) {
		printf("Numero %d: %d\n", i, *(puntero+i-1));
	}
}

void ir(int *puntero) {
	printf("Has elegido ir\n");
	free(puntero);
	printf("Gracias por utilizar este programa");
	exit(0);
}