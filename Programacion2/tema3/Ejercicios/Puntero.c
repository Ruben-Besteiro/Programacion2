#include <stdio.h>

void funcion1(char *puntero, char array[10]);

void main() {
	char *puntero;
	char array[10];
	puntero = &array[0];
	
	funcion1(puntero, array);
	
	for (int j = 0; j < 10; j++) {
		printf("%c", *(puntero+j));
	}
	
	printf("\nLa frase es ");
	for (int i = 0; i < 10; i++)  {
		printf("%c", *(puntero+i));
	}
}

void funcion1(char *puntero, char array[10]) {
	//char array[10];
	
	printf("Introduce una frase: ");
	fgets(array, 10, stdin);
	
	for (int i = 0; i < 10; i++) {
		*(puntero+i) = array[i];
	}
	
	for (int j = 0; j < 10; j++) {
		printf("%c", *(puntero+j));
	}
	printf("\n");
}