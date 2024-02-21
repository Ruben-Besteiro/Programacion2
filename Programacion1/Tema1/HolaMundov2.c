/* Hola mundo mejorado */
#include <stdio.h>

void main () {
	char caracter;
	
	printf("Imprimir ''Hola mundo''? (S/N)\n");
	scanf("%c", &caracter);
	
	if (caracter == 'S' || caracter == 's') {
		printf("Hola mundo :)\n");
	} else if (caracter == 'N' || caracter == 'n') {		/* Si el usuario responde que no, */
	} else {												/* no ocurre nada */
		printf("Error\n");
	}
}