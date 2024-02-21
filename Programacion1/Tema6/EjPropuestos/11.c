#include <stdio.h>

void main() {
	char cadena[50], cadena2[50];
	
	for (int i = 0; i < 50; i++) {			// Inicializa los arrays para evitar que aparezcan datos basura
		cadena[i] = '\0';
		cadena2[i] = '\0';
	}
	
	printf("Introduce una cadena: ");
	fgets(cadena, 50, stdin);
	
	for (int i = 0; i < 50; i++) {
		cadena2[i] = cadena[(49 - i)];
	}
	
	for (int i = 0; i < 50; i++) {
		if (cadena2[i] != '\0') {
			printf("%c", cadena2[i]);
		}
	}
}