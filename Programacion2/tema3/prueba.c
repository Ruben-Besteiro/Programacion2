#include <stdio.h>
#include <stdlib.h>

char *array();

void main() {
	char *nombre;
	
	nombre = array();
}

char *array() {
	char palabra[20];
	scanf("%s", &palabra);
	char newchar = getchar();
	
	char *nombre = (char *) malloc(sizeof(char));
	int i = 1;
	
	while(newchar != '\n') {
		nombre = (char *) realloc(nombre, i * sizeof(char));
		*(nombre+i) = palabra[i];
	}
	
	for (int i = 0; *(nombre+i) != '\n'; i++) {
		printf("%c", *(nombre+i));
	}
	
}