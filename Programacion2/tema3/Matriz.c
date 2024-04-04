#include <stdio.h>
#include <stdlib.h>

void nuevoValor(char *matriz, int filas, int columnas);
void verMatriz(char *matriz, int filas, int columnas);
void ir(char *matriz);

void main() {
	int filas = 0, columnas = 0;
	do {
		printf("Introduce las dimensiones de la matriz: ");
		scanf("%d %d", &filas, &columnas);
	} while (filas <= 0 || columnas <= 0);
	
	char *matriz = (char *) calloc(filas*columnas, sizeof(char) * filas * columnas);
	
	int opcion;
	while (opcion != 3) {
		printf("Pulsa 1 para anadir algun valor (char) a la matriz\n");
		printf("Pulsa 2 para ver la matriz\n");
		printf("Pulsa 3 para ir\n");
		scanf("%d", &opcion);
		
		switch(opcion) {
			case 1: nuevoValor(matriz, filas, columnas);
			break;
			case 2: verMatriz(matriz, filas, columnas);
			break;
			case 3: ir(matriz);
			break;
			default: printf("Eres tonto\n");
		}
	}
}

void nuevoValor(char *matriz, int filas, int columnas) {
	int filaelegida = 999999, columnaelegida = 999999;
	do {
		printf("Elige las coordenadas en las que introducir el valor (empezando por 0): ");
		scanf("%d %d", &filaelegida, &columnaelegida);
	} while (filaelegida > filas-1 || columnaelegida > columnas-1);
	while(getchar() != '\n');
	
	char valor;
	printf("Ahora introduce el valor que se quiere anadir: ");
	scanf("%c", matriz+(sizeof(char)+filaelegida*columnas+columnaelegida-1));
	while(getchar() != '\n');
}

void verMatriz(char *matriz, int filas, int columnas) {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (*(matriz+columnas*i+j) == '\0') {
				printf("_ ");
			} else {
				printf("%c ", *(matriz+columnas*i+j));
			}
		}
		printf("\n");
	}
}

void ir(char *matriz) {
	printf("Has elegido ir\n");
	printf("Gracias por utilizar este programa");
	free(matriz);
	exit(0);
}