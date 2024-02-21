#include <stdio.h>

void main () {
	int numero = 0, i = 0, resto = 0;
	
	printf("Introduce un numero: ");
	scanf("%d", &numero);
	
	for (i = 2; i < numero; i++) {
		resto = numero % i;
		if (resto == 0) {
			printf("El %d no es primo", numero);
		}
		if (i = numero) {
			printf("El %d si es primo", numero);
		}
	}
}