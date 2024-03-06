#include <stdio.h>

typedef struct{
	int *puntero;
} estructura;

void funcion(estructura estructura, int *puntero2);

void main() {
	estructura estructura;
	
	int *puntero2;
	int direccion2 = 0;
	puntero2 = &direccion2;
	
	//int direccion;
	//estructura.puntero = &direccion;
	printf("Direccion de memoria del puntero: %p\n", estructura.puntero);
	
	estructura.puntero = 0;
	printf("Valor inicial del puntero: %d\n", estructura.puntero);
	
	printf("%d", *puntero2);
	funcion(estructura, puntero2);
	//printf("Valor del puntero tras salir de la funcion: %d\n", estructura.puntero);
	printf("%d", *puntero2);
}

void funcion(estructura estructura, int *puntero2) {
	//estructura.puntero = 1;
	printf("Valor del puntero tras saltar a la funcion: %d\n", estructura.puntero);
	*puntero2 = 1;
	printf("%d\n", *puntero2);
}