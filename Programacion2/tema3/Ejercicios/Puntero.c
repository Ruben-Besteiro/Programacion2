#include <stdio.h>

void main() {
	int *puntero;
	int direccion = 0;
	puntero = &direccion;
	
	printf("En la direccion de memoria hay un %d\n", *puntero);
	funcion (&puntero);
	printf("Ahora hay un %d", *puntero);
}

void funcion (int *puntero) {
	*puntero = *puntero + 1;
}