#include <stdio.h>
#include <stdlib.h>

int SumaCifras(int numero);

void main(int argc, char ** argv) {
	char letras[23] = "TRWAGMYFPDXBNJZSQVHLCKE";
	int numero = strtol(argv[1], NULL, 10);
	
	if (numero < 10000000 || numero > 99999999) {
		printf("El DNI tiene que tener 8 cifras, pedazo de gilipollas");
		return;
	}
	
	int suma = SumaCifras(numero);
	printf("La suma de las cifras del DNI es %d\n", suma);
	
	int xd = suma % 23;
	printf("La letra del DNI es %c", letras[xd]);
}

int SumaCifras(int numero) {
	int suma = 0;
	
	if (numero > 9) {										// Caso recursivo
		suma = (numero % 10) + SumaCifras (numero / 10);
	} else {												// Caso base
		suma = numero;
	}
	return suma;
}