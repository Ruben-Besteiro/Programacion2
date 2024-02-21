#include <stdio.h>

void main() {
	char cadena[101];		// El último carácter (nº 101) siempre será \0, para que el programa sepa que esto es un string. Así que el que se usará para ver si el usuario se ha pasado del límite de caracteres es el nº 100
	int palabras = 1, vocales = 0;

	for (int i = 0; i < 100; i++) {
		cadena[i] = '\0';
	}

	printf("Introduce una cadena de caracteres (longitud máxima: 99): ");
	fgets(cadena, 101, stdin);
	
	/* for (int j = 0; j < 100; j++) {
		if (cadena[j] != '\0') {
			printf("%c", cadena[j]);
		} else {
			printf("0");
		}
	} */
	
	if (cadena[99] != '\0') {
		printf("La cadena introducida ha superado el límite de caracteres y se ha truncado\n");
	}

	for (int k = 0; k < 99; k++) {			// 0-98 = Los caracteres que se usan. 99 = Comprueba si el límite ha sido excedido. 100 = Carácter terminador del string
		if (cadena[k] == 'a' || cadena[k] == 'A' || cadena[k] == 'e' || cadena[k] == 'E' || cadena[k] == 'i' || cadena[k] == 'I' || cadena[k] == 'o' || cadena[k] == 'O' || cadena[k] == 'u' || cadena[k] == 'U' || cadena[k] == 'y' || cadena[k] == 'Y') {
			vocales++;
		}
		if (cadena[k] == ' ') {
			palabras++;
		}
	}
	printf("Hay %d vocales y %d palabras", vocales, palabras);
}