#include <stdio.h>
#include <stdlib.h>

char *LeeLineaDinamica(char *nombre, char *v, char *p);

void main() {
	char *p;
	char *v;
	char nombre[50];
	
	printf("Mete un nombre de 10 caracteres: ");
	LeeLineaDinamica(nombre, v, p);
	
	
	printf("El nombre introducido es %s\n", nombre);
	// Aquí la ejecución para
	
	printf("Ahora mete un nombre de 15 caracteres: ");
	scanf("%s", nombre);
	
	p = (char *) realloc(v, sizeof(char) * 15);
	
	printf("Ahora el nombre introducido es %s", nombre);
	
	free(v);
	free(p);
}

char *LeeLineaDinamica(char *nombre, char *v, char *p) {
	v = (char *) malloc(sizeof(char) * 10);
	
	scanf("%s", v);
	
	for (int i = 0; i < 50; i++) {
		nombre[i] = *(v+i);
	}
	return v;
}