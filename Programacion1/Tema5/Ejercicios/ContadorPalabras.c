#include <stdio.h>

void main () {
    int palabras = 0, bucle = 0; 
	char caracter = 0;

    printf("Introduce un texto y el programa contara sus palabras (para terminar, introduce :q seguido de un enter):\n");

    while (bucle == 0) { 
		caracter = getchar();												// Lee la última palabra que escribiste y el primer carácter se lo pasa a la variable
		printf("%c", caracter);

        if (caracter == ' ' || caracter == '\n') {							// Si lee un espacio o enter,
            palabras++;														// Aumenta el contador de palabras
		}

        if (caracter == ':' && getchar() == 'q' && getchar() == '\n') {		// Si el usuario pone :q\n,
            bucle++;														// Se sale del bucle
		}
	}
	printf("Palabras: %d\n", palabras);
}