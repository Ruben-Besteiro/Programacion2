#include <stdio.h>

void main() {
	int matriz[3][4];
	
	printf("Introduce los 9 numeros de una matriz 3x3 (separados cada uno por un enter)");
	
	for (int i = 0, j = 0; i < 3; j++) {		// i es la fila actual y j es la columna actual, empezando por el 0
		scanf("%d", &matriz[i][j]);
		if (j >= 3) {							// Una vez que la fila actual está del todo rellena, pasa a la siguiente
			j = -1;
			i++;
		}
	}
	
	printf("\nLa matriz que has introducido es:\n");
	printf("%d %d %d %d\n", matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]);
	printf("%d %d %d %d\n", matriz[1][0], matriz[1][1], matriz[1][2]/*, matriz[1][3]*/);
	printf("%d %d %d %d\n", matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]);
	
	printf("\nLa matriz traspuesta es:\n");
	printf("%d %d %d\n", matriz[0][0], matriz[1][0], matriz[2][0]);
	printf("%d %d %d\n", matriz[0][1], matriz[1][1], matriz[2][1]);
	printf("%d %d %d\n", matriz[0][2], matriz[1][2], matriz[2][2]);
	printf("%d %d %d\n", matriz[0][3], matriz[1][3], matriz[2][3]);
}