#include <stdio.h>

void main() {
	char cadena[20] = "";		// Inicializo la cadena a \0 en todo
	char caracter;
	int i = 0;
	
	while ((caracter = getchar()) != '\n') {
		cadena[i] = caracter;
		i++;
	}
	
	printf("La cadena es ");
	
	for (int j = 0; j < 20; j++) {
		printf("%c", cadena[j]);
	}
}