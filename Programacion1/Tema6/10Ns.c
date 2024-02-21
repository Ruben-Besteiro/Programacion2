#include <stdio.h>

void InvertirArray(int array[]);

void main() {
	int array[10];
	int comprobacion = 0;
	
		printf("Introduce 10 números enteros: ");
		for (int i = 0; i < 10; i++) {
			do {
				printf("Numero %d: ", i+1);
				comprobacion = scanf("%d", &array[i]);
				while (getchar() != '\n');
				
				if (comprobacion == 0) {
					printf("Error\n");
				}
			} while (comprobacion != 1);
		}

	printf("El array introducido es: ");
	for (int a = 0; a < 10; a++) {
		printf("%d ", array[a]);
	}
	printf("\n");

	InvertirArray(array);
}

void InvertirArray(int array[]) {
	int array2[10];

	for (int j = 0; j < 10; j++) {		// Aquí está el error
		array2[j] = array[9-j];
	}
	
	printf("El array invertido es: ");
	for (int k = 0; k < 10; k++) {
		printf("%d ", array2[k]);
	}
}