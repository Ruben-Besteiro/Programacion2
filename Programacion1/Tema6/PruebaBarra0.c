#include <stdio.h>
#include <unistd.h>

void main() {
	srand(getpid);

	char array[50];

	for (int i = 0; i < 50 ; i++) {
		if (rand() % 2 == 0) {
			array[i] = '\0';
		}
	}
	printf("XD");

	while (1) {
		int posicion = (rand() % 50);
		if (array[posicion] == '\0') {
			printf("\nEl caracter en la posicion %d del array es \0", posicion);
		} else {
			printf("\nEl caracter en la posicion %d del array es %c", posicion, array[posicion]);
		}
	}
}