#include <stdio.h>
#include <stdlib.h>

void añadirNumero(int *array, int *pcantidadnumeros);
void borrarNumero(int *array, int *pcantidadnumeros);
void salir(int *array);

void main() {
	int *pcantidadnumeros;
	int cantidadnumeros = 0;
	pcantidadnumeros = &cantidadnumeros;
	
	int *array = (int *) malloc(sizeof(int));		// Al principio el array va a estar vacío, pero luego se irá realocando cada vez que vayamos metiendo / quitando cosas
	int opcion = 0;
	
	while(opcion != 3) {
		printf("Array: [");
		for (int i = 0; i < *pcantidadnumeros; i++) {
			printf("%d", *(array+i));
			if (i < *pcantidadnumeros-1) {
				printf(", ");
			}
		}
		printf("]\n");
		
		printf("Pulsa 1 para anadir un numero al array\n");
		printf("Pulsa 2 para borrar un numero del array\n");
		printf("Pulsa 3 para salir\n");
		
		scanf("%d", &opcion);
		switch(opcion) {
			case 1: añadirNumero(array, pcantidadnumeros);
			break;
			case 2: borrarNumero(array, pcantidadnumeros);
			break;
			case 3: salir(array);
			break;
			default: printf("Eres tonto\n");
		}
	}
}

void añadirNumero(int *array, int *pcantidadnumeros) {
	*(pcantidadnumeros) += 1;
	array = (int *) realloc(array, sizeof(int)*(*pcantidadnumeros));
	
	printf("Introduce un numero: ");
	scanf("%d", array+(*pcantidadnumeros)-1);
}

void borrarNumero(int *array, int *pcantidadnumeros) {
	int numero, ocurrencias = 0;
	
	printf("Introduce que numero se quiere borrar: ");
	scanf("%d", &numero);
	
	for (int i = 0; i < *pcantidadnumeros; i++) {
		if (*(array+i) == numero) {
			for (int j = i; j < *pcantidadnumeros; j++) {
				*(array+j) = *(array+j+1);
			}
			ocurrencias++;
			i = -1;
		}
	}
	*(pcantidadnumeros) -= ocurrencias;
}

void salir(int *array) {
	printf("Has elegido salir\n");
	free(array);
	printf("Gracias por utilizar este programa");
	exit(0);
}