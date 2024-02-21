#include <stdio.h>

void main() {
	char palabra[30];
	for (int i = 0; i < 30; i++) {		// Inicializa el array
		palabra[i] = '\0';
	}
	
	int tamaño = 0, contador = 0;
	
	printf("Introduce una palabra y el programa averiguara si es un palindromo: ");
	scanf("%30s", &palabra);
	
	for (int i = 0; i < 30; i++) {		// Calcula el tamaño de la palabra sin usar strlen
		if (palabra[i] != '\0') {
			tamaño++;
		}
	}
	
	for (int i = 0; i < 30; i++) {
		if ((palabra[i] == palabra[(tamaño - 1 - i)]) && (palabra[i] != '\0') && (palabra[tamaño - 1 - i] != '\0')) {
			contador++;
		}
	}
	
	if (contador == tamaño) {
		printf("%s es un palindromo", palabra);
	} else {
		printf("%s no es un palindromo", palabra);
	}
}