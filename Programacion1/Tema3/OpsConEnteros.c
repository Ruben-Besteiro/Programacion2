#include <stdio.h>

void main() {
	int a = 0, b = 0, suma = 0, resta = 0, multi = 0, mod = 0;
	float divi = 0;
	printf("Introduce 2 numeros enteros: ");
	scanf("%d %d", &a, &b);
	
	suma = a + b;
	resta = a - b;
	multi = a * b;
	divi = (float) a / (float) b;
	mod = a % b;		// Si los valores fuesen reales en vez de enteros, esta operación sería imposible de hacer
	
	printf("a + b = %d\n", suma);
	printf("a - b = %d\n", resta);
	printf("a * b = %d\n", multi);
	printf("a / b = %f\n", divi);
	printf("a % b = %d\n", mod);
}