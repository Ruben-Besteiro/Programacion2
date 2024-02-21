#include <stdio.h>

int n = 0, resultado = 0;
int Fibonacci (int n);

void main () {
	printf("Introduce el enesimo numero de la serie de Fibonacci: ");
	scanf("%d", &n);
	resultado = Fibonacci (n);
	
	printf("Dicho numero es %d", resultado);
}

int Fibonacci (int n) {
	if (n == 0) {
		resultado = 0;
	} else if (n == 1) {
		resultado = 1;
	} else {
		resultado = Fibonacci (n - 1) + Fibonacci (n - 2);
	}
	
	return resultado;
}