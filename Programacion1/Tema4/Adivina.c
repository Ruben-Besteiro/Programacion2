#include <stdio.h>
#include <stdlib.h>			// Para el rand()
#include <unistd.h>			// Para el getpid()

void main() {
	srand(getpid());						// Alimenta al rand con una seed
	int random = (rand() % 11), numero = 0, intentos = 1, loop = 0;

		printf("Adivina el numero entre 0 y 10 (si fallas, eres gilipollas): ");
	
	while (loop == 0) {
		scanf("%d", &numero);
	
		if (numero != random) {
			printf("Eres gilipollas.");
			intentos++;
		} else {
			printf("GG. Intentos: %d.", intentos);
			loop++;
		}
	}
}