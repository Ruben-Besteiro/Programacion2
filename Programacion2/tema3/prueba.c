#include <stdio.h>
#include <stdlib.h>

char palabra[20];

char *lld();

void main() {
	char *nombre;
	int *ptamañopalabra;
	int tamañopalabra = 0;
	ptamañopalabra = &tamañopalabra;
	
	nombre = lld();
	printf("%d\n", *ptamañopalabra);
	
	int i = 0;
	while (palabra[i] != '\0') {
		printf("%c", nombre[i]);
		i++;
	}
}

char *lld() {	
	scanf("%s", &palabra);
	char newchar;
	
	char *nombre = (char *) malloc(sizeof(char));
	if (nombre == NULL) {
		printf("Error: No hay memoria suficiente. Vuelve a intentarlo mas tarde");
		free(nombre);
		exit(1);
	}
	
	int i = 0;
	
	while((newchar = getchar()) != '\n') {
		nombre = (char *) realloc(nombre, i * sizeof(char));
		nombre[i] = palabra[i];
		i++;
	}
	nombre[i] = '\0';
	printf("%s", palabra);
	
	return palabra;
}