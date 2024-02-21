#include <stdio.h>

void main() {
	float transacciones[3][5];
	int bruh = -1, bruh2 = -1, bruh3 = -1;
	
	
	do {
		printf("Introduce las 5 transacciones del primer dia: ");
		bruh = scanf("%f %f %f %f %f", &transacciones[0][0], &transacciones[0][1], &transacciones[0][2], &transacciones[0][3], &transacciones[0][4]);
		if (bruh != 5) {
			printf("Error en la entrada de datos. Vuelve a intentarlo\n");
		}
		while (getchar() != '\n');
	} while (bruh != 5);
	
	do {
		printf("Introduce las 5 transacciones del segundo dia: ");
		bruh2 = scanf("%f %f %f %f %f", &transacciones[1][0], &transacciones[1][1], &transacciones[1][2], &transacciones[1][3], &transacciones[1][4]);
		if (bruh2 != 5) {
			printf("Error en la entrada de datos. Vuelve a intentarlo\n");
		}
		while (getchar() != '\n');
	} while (bruh2 != 5);
		
	do {
		printf("Introduce las 5 transacciones del tercer dia: ");
		bruh3 = scanf("%f %f %f %f %f", &transacciones[2][0], &transacciones[2][1], &transacciones[2][2], &transacciones[2][3], &transacciones[2][4]);
		if (bruh3 != 5) {
			printf("Error en la entrada de datos. Vuelve a intentarlo\n");
		}
		while (getchar() != '\n');
	} while (bruh3 != 5);
		
	
	printf("La matriz de transacciones es:\n");
	for (int f = 0, c = 0; f < 3; c++) {			// i son las filas y j son las columnas
		printf("%.2f\t", transacciones[f][c]);
		
		if (c == 4) {
			c = -1;
			f++;
			printf("\n");
		}
	}
}