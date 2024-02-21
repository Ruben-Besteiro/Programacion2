#include <stdio.h>
#define TAM 5

void imprimirArray (char array[], int tamano);

void main() {
	char array[TAM]={'A', 'n', 'a', ' ', ' '};
	char newchar;
	int numerocaracter = 0;
	int tamano = 0;
	
	printf("Mete un nombre: ");
	while (((newchar=getchar()) != '\n') && (numerocaracter < TAM)) {
		array[numerocaracter] = newchar;
		tamano++;
	}
	imprimirArray(array, tamano);
}
	
void imprimirArray(char array[], int tamano) {
	for (int i=0; i<tamano; i++) {
		printf("%c", array[i]);		// No hace nada
	}
	return;
}