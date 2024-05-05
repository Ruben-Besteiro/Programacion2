#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char *cadena1 = "Hola mi amol";
	char *cadena2 = "Hola mi amol";
	
	int numero = strcmp(cadena1, cadena2);
	if (numero == 0) {
		printf("Las cadenas son iguales");
	} else {
		printf("Las cadenas son distintas");
	}
}