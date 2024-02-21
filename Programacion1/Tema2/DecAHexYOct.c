#include <stdio.h>

void main() {
	int numero = 0;
	printf("Introduce un numero entero: ");
	scanf("%d", &numero);
	
	printf("El numero que has escogido es %o en octal y %x en hexadecimal", numero);