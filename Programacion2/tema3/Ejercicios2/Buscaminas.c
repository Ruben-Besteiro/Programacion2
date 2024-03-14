#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
	short numero;
	short fila;
	short columna;
} intento;

void nuevoIntento(char *iniciomatriz, long dimension, int filamina, int columnamina, int *pfilaelegida, int *pcolumnaelegida, int *pcantidadintentos, intento *primerintento);
void verIntentos(intento *primerintento, int *pcantidadintentos, int *pfilaelegida, int *pcolumnaelegida);
void verMatriz(char *iniciomatriz, long dimension, int filamina, int columnamina);
void aTomarPorCulo(char *iniciomatriz, intento *primerintento, long dimension, int filamina, int columnamina);


void main(int argc, char *argv[]) {
	srand(getpid());
	
	if (argc < 2) {
		printf("Debes introducir la dimension de la matriz cuadrada de minas");
		exit(1);
	}
	
	long dimension = strtol(argv[1], NULL, 10);
	char *iniciomatriz = (char *) malloc(sizeof(char)*dimension*dimension);
	intento *primerintento;
	
	int *pfilaelegida, *pcolumnaelegida;
	int filaelegida, columnaelegida;
	pfilaelegida = &filaelegida, pcolumnaelegida = &columnaelegida;
	
	int *pcantidadintentos;							// Esta variable se usará para saber cuántos structs hacemos
	int cantidadintentos = 0;
	pcantidadintentos = &cantidadintentos;
	
	primerintento = (intento *) malloc(sizeof(intento));		// Alocamos suficiente memoria para un struct, pero luego lo iremos aumentando según metamos más
	
	for (int i = 0; i < dimension; i++) {			// Se inicializa la matriz con el carácter ?
		for (int j = 0; j < dimension; j++) {
			*(iniciomatriz+j) = '?';
		}
	}
	
	printf("Hay una mina en esta matriz\n");
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			printf("%c ", *(iniciomatriz+j));
		}
		printf("\n");
	}
	
	int columnamina = (rand() % dimension);
	int filamina = (rand() % dimension);
	
	while (1) {											// Aquí se hace un bucle infinito que se romperá con un exit cuando el jugador gane o le dé al 4
		printf("Pulsa 1 para hacer un intento\n");
		printf("Pulsa 2 para ver los intentos fallidos\n");
		printf("Pulsa 3 para ver la matriz\n");
		printf("Pulsa 4 para salir\n");
		
		int numero;
		scanf("%d", &numero);
		
		switch (numero) {
			case 1: nuevoIntento(iniciomatriz, dimension, filamina, columnamina, pfilaelegida, pcolumnaelegida, pcantidadintentos, primerintento);
			break;
			case 2: verIntentos(primerintento, pcantidadintentos, pfilaelegida, pcolumnaelegida);
			break;
			case 3: verMatriz(iniciomatriz, dimension, filamina, columnamina);
			break;
			case 4: aTomarPorCulo(iniciomatriz, primerintento, dimension, filamina, columnamina);
			printf("Gracias por jugar");
			exit(0);
			break;
			default: printf("Eres tonto\n");
		}
	}
}


void nuevoIntento(char *iniciomatriz, long dimension, int filamina, int columnamina, int *pfilaelegida, int *pcolumnaelegida, int *pcantidadintentos, intento *primerintento) {

	printf("Elige una coordenada (empezando por el 0): ");
	scanf("%d %d", pfilaelegida, pcolumnaelegida);
	
	if ((*pfilaelegida == filamina) && (*pcolumnaelegida == columnamina)) {
		printf("GG\n");
		*(iniciomatriz+(dimension*(*pfilaelegida))+*pcolumnaelegida) = 'X';
		aTomarPorCulo(iniciomatriz, primerintento, dimension, filamina, columnamina);
	} else {
		printf("Has fallado\n");
		*(iniciomatriz+(dimension*(*pfilaelegida))+*pcolumnaelegida) = 'O';
	}
	
	(primerintento+*pcantidadintentos)->numero = *pcantidadintentos;
	(primerintento+*pcantidadintentos)->fila = *pfilaelegida;
	(primerintento+*pcantidadintentos)->columna = *pcolumnaelegida;
	(*pcantidadintentos)++;
	primerintento = realloc(primerintento, *pcantidadintentos);			// Se agranda la lista dinámica de structs para poder meter el siguiente intento cuando lo hagamos
}


void verIntentos(intento *primerintento, int *pcantidadintentos, int *pfilaelegida, int *pcolumnaelegida) {
	for (int i = 0; i < *pcantidadintentos; i++) {
		printf("Intento %d: %d %d\n", (primerintento+i)->numero+1, (primerintento+i)->fila, (primerintento+i)->columna);
	}
}


void verMatriz(char *iniciomatriz, long dimension, int filamina, int columnamina) {
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			if (*(iniciomatriz+(dimension*i)+j) != 'O') {
				printf("? ");
			} else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}

void aTomarPorCulo(char *iniciomatriz, intento *primerintento, long dimension, int filamina, int columnamina) {
	printf("La matriz era asi:\n");
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			if (i == filamina && j == columnamina) {
				printf("X ");
			} else {
				printf("0 ");
			}
		}
		printf("\n");
	}
	printf("Gracias por jugar");
	free(iniciomatriz);
	free(primerintento);
	exit(0);
}