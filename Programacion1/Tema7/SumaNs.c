#include <stdio.h>

void main() {
	int cantidad = 0, sumans = 0;
	int *pnumeros;
	
	/*for (int a = 0; a < 100; a++) {
		*(pnumeros + a) = 0;
	}*/
	
	do {
		printf("Elige que cantidad de numeros introducir: ");
		scanf("%d", &cantidad);
	} while (cantidad < 0);
	
	for (int i = 0; i < cantidad; i++) {		// Le pide al usuario que introduzca un número tantas veces como lo haya definido
		printf("%d", i);
		printf("Numero %d: ", (i + 1));
		scanf("%d", (&pnumeros + i));
	}
	
	for (int x = 0; x < cantidad; x++) {
		printf("%d", (pnumeros+x));
	}
	
	for (int j = 0; j < cantidad; j++) {		// Efectúa la suma
		printf("XD");
//		sumans += (*pnumeros+j);
	}
	printf("La suma de los numeros es %d", sumans);
}