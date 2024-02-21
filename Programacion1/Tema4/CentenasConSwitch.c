#include <stdio.h>

void main() {
	int numero = 0;
	
	printf("Introduce un entero entre 100 y 999: ");
	scanf("%d", &numero);

	numero /= 100;
	
	switch (numero) {
		case 1: 
		case 2:
		case 3:
		case 5: printf("La cifra de las centenas es %d", numero);
			break;
		case 0:
		case 4:
		case 6:
		
		default: printf("Error");
	}
}