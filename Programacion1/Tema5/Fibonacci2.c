#include <stdio.h>

int fibonacci (int posicion);
int numero = 0;

void main () {
	int posicion = 0;
	
	printf("Introduce la posicion en la serie de Fibonacci de un numero: ");
	scanf("%d", &posicion);
	
	if (posicion < 0) {
		printf("Error");
		return;
	} else {
		numero = fibonacci (posicion);
		printf("El numero de Fibonacci en la posicion %d es %d", posicion, numero);
	}
}

int fibonacci (int posicion) {
	if (posicion < 0) {
		numero = 0;
	} else if (posicion == 0 || posicion == 1) {
		numero = 1;
	} else {
		numero = fibonacci (posicion - 1) + fibonacci (posicion - 2);
	}
}