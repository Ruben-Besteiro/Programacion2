#include <stdio.h>

void main() {
	int numero = 0;
	
	printf("Introduce un entero entre 100 y 999: ");
	scanf("%d", &numero);

	numero /= 100;

	if (numero < 1 || numero > 9) {
		printf("Error");
	} else if (numero == 1 || numero == 2 || numero == 3 || numero == 5) {
		printf("La cifra de las centenas es %d", numero);
	} else {
		printf("La cifra de las centenas no es 1, 2, 3 o 5");
	}
}