#include <stdio.h>

void IntroduceNumeros(int *real1, int *imag1, *int real2, *int imag2);

void main() {
	int *real1 = 0, *imag1 = 0, *real2 = 0, *imag2 = 0;
	
	printf("Bienvenido al programa de suma de complejos\n");
	
	IntroduceNumeros(*real1, *imag1, *real2, *imag2);
	
	printf("El primer numero es %d+%di\n", real1, imag1);
	printf("El segundo numero es %d+%di\n", real2, imag2);
}

void IntroduceNumeros(int *real1, int *imag1, int *real2, int *imag2) {
	printf("Primer numero: ");
	scanf("%d+%di", &real1, &imag1);
	
	printf("Segundo numero: ");
	scanf("%d+%di", &real2, &imag2);
}