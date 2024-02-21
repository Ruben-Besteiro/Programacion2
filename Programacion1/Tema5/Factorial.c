#include <stdio.h>

int n = 0, resultado = 0;
int factorial (int n);

void main () {
	printf("Introduce un numero: ");
	scanf("%d", &n);
	resultado = factorial (n);
	
	printf("El factorial de %d es %d", n, resultado);
}

int factorial (int n) {
	if (n == 0) {
		resultado = 1;
	} else {
		resultado = n * factorial (n - 1);
		printf("%d\n", resultado);
	}
	return resultado;
}