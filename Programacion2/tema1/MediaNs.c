#include <stdio.h>
#include <stdlib.h>

void main (int argc, char * argv[]) {
	long int numeros[argc-1];
	
	if (argc < 2) {
		printf("Error: No se ha pasado ningún argumento");
	} else {
		int suma = 0;
	
		for (int i = 1; i < argc; i++) {
			numeros[i] = strtol(argv[i], NULL, 10);
			suma += numeros[i];
		}
	
		int media = suma / (argc - 1);
		printf("La media de los numeros es %d", media);
	}
}