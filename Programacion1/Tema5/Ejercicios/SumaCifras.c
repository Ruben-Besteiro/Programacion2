#include <stdio.h>

int suma = 0;

void main () {
	int numero = 0;
	int SumaCifras (int numero);
	
	printf("Introduce un numero y el programa sumara sus cifras: ");
	scanf("%d", &numero);
	suma = SumaCifras (numero);
	printf("La suma de las cifras de %d es %d", numero, suma);
}

int SumaCifras (int numero) {
	if (numero > 9) {										// Caso recursivo
		suma = (numero % 10) + SumaCifras (numero / 10);
	} else {												// Caso base
		suma = numero;
	}
	return suma;
}