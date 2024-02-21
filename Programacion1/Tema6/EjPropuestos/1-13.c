#include <stdio.h>
#include <unistd.h>

void CompruebaResultado(int array[]);

void main() {
	srand(getpid());
	
	int array[30];						// Inicializa el array
	for (int i = 0; i < 30; i++) {		// Recorre el array y va rellenando cada una de sus posiciones con un número random
		array[i] = (rand() % 31);
	}
	
	printf("Se ha generado un array de tamaño 30 con numeros random entre 0 y 30\n");
	CompruebaResultado(array);
}

void CompruebaResultado(int array[]) {
	int bucle = 0, numero = 0, contador = 0;
	
	while (bucle == 0) {
		contador = 0;
		printf("Introduce un numero: ");
		scanf("%d", &numero);
		
		for (int i = 0; i < 30; i++) {
			if (array[i] == numero) {
				printf("El numero ha sido encontrado en la posicion %d", i);
				bucle++;
				break;
			} else {
				contador++;			// Este contador lleva la cuenta de las veces que el número no ha sido encontrado
				if (contador == 30) {
					printf("El numero no ha sido encontrado\n");
				}
			}
		}
	}
}