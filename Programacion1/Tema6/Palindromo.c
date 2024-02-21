#include <stdio.h>

int tamañoCadena(char palabra[]);
int leeLinea(char palabra[], int tamaño);

void main() {
	char palabra[20];
	for (int i = 0; i < 20; i++) {
		palabra[i] = '\0';
	}
	
	printf("Introduce una palabra: ");
	
	char newChar;
	int j = 0;
	while ((newChar = getchar()) != '\n') {
		palabra[j] = newChar;
		j++;
	}
	
	for (int i = 0; i < 20; i++) {
		printf("%c", palabra[i]);
	}
	printf("\n");
	
	int tamaño = tamañoCadena(palabra);
	
	leeLinea(palabra, tamaño);
}

int tamañoCadena(char palabra[20]) {
	int tamaño = 0;
	for (int i = 0; i < 21; i++) {				// El for llega hasta el 21 para así saber si se ha excedido el límite
		if (palabra[i] != '\0' && palabra[i] != '\n') {
			tamaño++;
		}
	}
	return tamaño;
}

int leeLinea(char palabra[20], int tamaño) {
	int contador = 0;
	if (tamaño > 20) {
		printf("El taman~o de la palabra ha excedido el maximo, asi que se ha truncado");
	} else {
		printf("El taman~o de la palabra es %d", tamaño);
	}
}