#include <stdio.h>

void main () {
	char nombre [100];
	
	printf("Introduce tu nombre\n");
	fgets(nombre, 100, stdin);
	printf("Tu nombre es %s", nombre);
}