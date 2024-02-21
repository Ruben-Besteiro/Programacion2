#include <stdio.h>

int SumaDiagonal (int matriz[][3]);

void main() {
	int matriz[3][3];
	int comprobacion = 0;
	printf("Introduce los valores de una matriz:\n");
	
	for (int f = 0; f < 3; f++) {				// Así se inicializa una matriz
		for (int c = 0; c < 3; c++) {
			do {
				printf("Fila %d, columna %d: ", f+1, c+1);
				comprobacion = scanf("%d", &matriz[f][c]);
				while (getchar() != '\n');
				if (comprobacion == 0) {
					printf("Error\n");
				}
			} while (comprobacion != 1);
		}
	}
	
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++) {
			printf("%d\t", matriz[f][c]);
		}
		printf("\n");
	}
	
	int suma = SumaDiagonal(matriz);
	printf("La suma de los elementos de la diagonal principal es %d", suma);
	
	
	float n1 = (float) matriz[0][0];
	float n2 = (float) matriz[1][1];
	float n3 = (float) matriz[2][2];
	
	int media = (n1 + n2 + n3) / 3;
	printf("La media de la diagonal es de unos %d", media);
}

int SumaDiagonal (int matriz[][3]) {
	int suma = matriz[0][0] + matriz[1][1] + matriz[2][2];
	return suma;
}