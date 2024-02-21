#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int numeros [10];
void EstaONo (int numero, int* numeros, int a);

void main () {
	int numero = 0, a = 0;
	
	srand(getpid());
	
	for (int i = 0; i <= 10; i++) {
		numeros [i] = rand() % 31;		// Una vez que se pone la semilla, el número que se genera no es siempre el mismo
	}
	
	printf("Los numeros generados son:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", numeros [i]);
	}
	
	printf("\nAhora introduce un numero y el programa vera si esta dentro del array o no: ");
	
	EstaONo (numero, numeros, a);
}
	
void EstaONo (int numero, int* numeros, int a) {
	scanf("%d", &numero);
	
	for (int i = 0; i <= 10; i++) {
		if (numero == numeros [i]) {
			printf("%d si esta :D", numero);
			return;															// Se sale automáticamente del bucle for
		} else {
			a++;															// Uso la variable a para llevar la cuenta de el número de veces que el número no se corresponde con algún elemento del array
		}
	}
	if (a > 9) {															// Si el número que metemos no coincide con lo que hay en el array ni una sola vez
		printf("%d no esta en el array. Prueba otra vez: ", numero);		// Se imprime que el número no está
		EstaONo (numero, numeros, a);
	}
}