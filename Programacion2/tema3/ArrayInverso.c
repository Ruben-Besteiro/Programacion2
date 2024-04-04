#include <stdio.h>
#include <stdlib.h>

int invertirArray(int *puntero, int argc, int i);

void main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("Debes pasar una lista de numeros por argv");
		exit(1);
	}
		
	int *primernumero = (int *) malloc(sizeof(int)*(argc-1));
	for (int i = 1; i < argc; i++) {
		*(primernumero+i-1) = (int) strtol(argv[i], NULL, 10);
	}
		
	printf("La lista de numeros es: ");
	for (int i = 0; i < argc-1; i++) {
		printf("%d ", *(primernumero+i));
	}
	printf("\n");
	
	int *arrayinverso = (int *) malloc(sizeof(int)*(argc-1));
	printf("La lista de numeros invertida es: ");
	for (int i = 0; i < argc-1; i++) {
		*(arrayinverso+i) = invertirArray(primernumero, argc, i);
		printf("%d ", *(arrayinverso+i));
	}
	
	free(primernumero);
	free(arrayinverso);
}

int invertirArray(int *primernumero, int argc, int i) {
	return *(primernumero+argc-i-2);
}