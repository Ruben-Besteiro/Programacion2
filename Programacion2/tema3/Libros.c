#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int paginas;
	char nombre[20];
	char autor[20];
} libro;


void nuevoLibro (int *pcantidadlibros, libro *primerlibro);
void aTomarPorCulo(int *pcantidadlibros, libro *primerlibro);


void main() {
	int *pcantidadlibros;
	int cantidadlibros = 0;
	pcantidadlibros = &cantidadlibros;
	libro *primerlibro;
	primerlibro = malloc(sizeof(libro)*(*pcantidadlibros)+1);
	int numero;
	
	while (1) {
		printf("Pulsa 1 para introducir un nuevo libro\n");
		printf("Pulsa 2 para ver los libros y salir\n");
		
		scanf("%d", &numero);
		while(getchar() != '\n');
		switch(numero) {
			case 1: nuevoLibro(pcantidadlibros, primerlibro);
			break;
			case 2: aTomarPorCulo(pcantidadlibros, primerlibro);
			break;
			default: printf("Eres gilipollas\n");
		}
	}
}

void nuevoLibro (int *pcantidadlibros, libro *primerlibro) {
	*pcantidadlibros = *(pcantidadlibros) + 1;
	primerlibro = realloc(primerlibro, sizeof(libro)*(*pcantidadlibros+1));
	
	printf("Libro %d\n", *pcantidadlibros);
	printf("Nombre: ");
	fgets(((primerlibro+*pcantidadlibros)->nombre), 20, stdin);		// Hay q darle a enter 2 veces para q vaya
	while(getchar() != '\n');
	printf("Autor: ");
	fgets(((primerlibro+*pcantidadlibros)->autor), 20, stdin);
	while(getchar() != '\n');
}

void aTomarPorCulo(int *pcantidadlibros, libro *primerlibro) {
	printf("Has seleccionado irte a tomar por culo\n");
	printf("Introduciste %d libros\n", *pcantidadlibros);
	for (int i = 0; i < *pcantidadlibros; i++) {
		printf("Nombre %d: \n", i+1);			// Presenta por pantalla putas mierdas
		for (int j = 0; j < 20; j++) {
			if ((primerlibro+i+1)->nombre[j] == '\n') {
				break;
			} else {
				printf("%c", (primerlibro+i+1)->nombre[j]);
			}
		}
		printf("\n");
		printf("Autor %d: \n", i+1);				// Al programa no le sale de los putos cojones acceder a lo que tengo guardado
		for (int j = 0; j < 20; j++) {
			if ((primerlibro+i+1)->nombre[j] == '\n') {
				break;
			} else {
				printf("%c", (primerlibro+i+1)->autor[j]);
			}
		}
	}
	free(primerlibro);
	exit(0);
}