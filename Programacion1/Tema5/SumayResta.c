#include <stdio.h>

float a = 0, b = 0, int suma = 0, resta = 0;
float FuncionSuma (float a, float b), FuncionResta (float a, float b);

void main () {
	printf("Introduce 2 numeros y el programa los sumara y restara: ");
	scanf("%f %f", &a, &b);
	suma = FuncionSuma (a, b);
	resta = FuncionResta (a, b);
	printf("%f + %f = %f\n", a, b, suma);
	printf("%f - %f = %f", a, b, resta);
}

float FuncionSuma (float a, float b) {
	suma = a + b;
	return (suma);
}

float FuncionResta (float a, float b) {
	resta = a - b;
	return (resta);
}

/* 
void SumaResta (float a, float b, &suma, &resta)

void SumaResta (float a, float b, float *suma, float *resta) {
	*suma = a + b;
	*resta = a - b;