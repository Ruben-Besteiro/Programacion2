#include <stdio.h>

void SumaResta (float a, float b, float *suma, float *resta);

void main () {
	float a = 0, b = 0, suma = 0, resta = 0;
	printf("Introduce 2 numeros: ");
	scanf("%f %f", &a, &b);
	SumaResta (a, b, &suma, &resta);
}

void SumaResta (float a, float b, float *suma, float *resta) {
	*suma = a + b;
	*resta = a - b;
}