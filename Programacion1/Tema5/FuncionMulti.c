#include <stdio.h>

int numero1 = 0, numero2 = 0, multiplicacion = 0;
int Multi (int numero1, int numero2);					// Prototipo de la función

void main () {
	printf("Introduce 2 numeros y el programa los multiplicara: ");
	scanf("%d %d", &numero1, &numero2);
	
	multiplicacion = Multi (numero1, numero2);			// Invocación de la función. El valor que tienen estos parámetros (los reales) es lo que se les asigna a los formales
	printf("%d * %d = %d", numero1, numero2, multiplicacion);
}

int Multi (int numero1, int numero2) {					// Aquí empieza la función de verdad
	int multiplicacion = numero1 * numero2;
	return(multiplicacion);
}