#include <stdio.h>

void imprimirArray ();

void main () {
	char *pnombre;
	
	printf("Mete un nombre: ");
	gets(pnombre);
	
	printf("%p\n", pnombre);
	printf("%p\n", &pnombre);

	printf("%p\n", pnombre);		// Direcciones de memoria
	printf("%p\n", &pnombre);
	
	for (int i = 0; i < 10; i++) {
		printf("%c", pnombre [i]);
	}
	imprimirArray;
}

void imprimirArray (char *pnombre[50]) {				// Paso por referencia
	for (int i = 0; i < 10; i++) {
		printf("%c", *pnombre [i]);
	}
	return;
}