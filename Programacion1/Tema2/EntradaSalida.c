#include <stdio.h>

void main() {
	int entero = 0;
	float flotante = 0;
	
	printf("Introduce un entero y un racional, separados por una coma: ");
	scanf("%d, %f", &entero, &flotante);
	
	printf("%120d\n", entero);
	printf("%120.2f", flotante);
	
}