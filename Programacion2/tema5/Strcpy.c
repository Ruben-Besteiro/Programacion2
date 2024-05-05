#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char *nombre, *apellido, *nombrecompleto;
	
	printf("Introduce un nombre y un apellido: ");
	scanf("%s %s", nombre, apellido);
	nombrecompleto = strcat(nombre, " ");
	nombrecompleto = strcat(nombrecompleto, apellido);
	printf("%s", nombrecompleto);
}