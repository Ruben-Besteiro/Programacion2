#include <stdio.h>

void main () {
	
	int numero, resultado = 0;
	
	printf("Introduce un numero entero para saber si es par o impar: ");
	scanf("%d", &numero);
	
	resultado = numero % 2;
	
	if (numero == 0) {
		printf("El numero que has escogido es par");
	} else {
		printf("El numero que has escogido es impar");
	}
}