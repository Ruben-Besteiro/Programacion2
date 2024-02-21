#include <stdio.h>

void rellenaFibonacci(int serieFibo[]);
void muestraNumeroFibo(int serieFibo[], int numero, int resultadoscanf);

void main() {
	int serieFibo[21], numero;
	
	rellenaFibonacci(serieFibo);
	
	while (0 < numero < 21) {
		printf("Introduce una posicion en la serie de Fibonacci (Ctrl+C para salir): ");
		int resultadoscanf = scanf("%d", &numero);
		
		while (getchar() != '\n');			// Limpia el búfer
		
		muestraNumeroFibo(serieFibo, numero, resultadoscanf);
	}
}

void rellenaFibonacci(int serieFibo[21]) {
	
	for (int i = 0; i < 21; i++) {			// Rellena el array
		if (i == 0) {
			serieFibo[i] = 0;
		} else if (i == 1) {
			serieFibo[i] = 1;
		} else {
			serieFibo[i] = serieFibo[i - 1] + serieFibo[i - 2];
		}
	}
}

void muestraNumeroFibo(int serieFibo[21], int numero, int resultadoscanf) {
	if (resultadoscanf == 0) {		// Cuando metemos una letra, resultadoscanf va a dar igual a 0 porque el escaneo no funcionó
		printf("Error en la entrada de datos\n");
		return;
	}
	
	if (numero <= 0) {
		printf("Tiene que ser un numero natural, tonto del culo\n");
	} else if (numero > 20) {
		printf("Por favor, introduce un numero menor o igual que 20\n");
	} else {
		printf("El numero de Fibonacci en la posicion %d es: %d\n", numero, serieFibo[numero]);
	}
}