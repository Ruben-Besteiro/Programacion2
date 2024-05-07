#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *palabra;
	int ocurrencias;
	int *lineas;
} palabraInfo;

void examinarArchivo(FILE *archivo2, char *texto, int argc, char *argv[]);

void main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Debes pasar una o varias palabras por argv");
		exit(1);
	}
	
	FILE *archivo = fopen("texto.txt", "r");
	FILE *archivo2 = fopen("salida.txt", "w");
	//printf("%p", archivo);

	char *texto = (char *) malloc(1000000);
	
	for (int i = 0; !feof(archivo); i++) {
		char caracter = getc(archivo);
		texto[i] = caracter;
	}
	//printf("%s", texto);
	
	examinarArchivo(archivo2, texto, argc, argv);
	
	free(texto);
	fclose(archivo);
	fclose(archivo2);
	exit(0);
}

void examinarArchivo(FILE *archivo2, char *texto, int argc, char *argv[]) {
	for (int i = 1; i <= argc-1; i++) {
		//int *ocurrencias = (int *) calloc(argc-1, sizeof(int)*(argc-1));
		int ocurrencias = 0;
		char *palabra = NULL;
		palabra = strstr(texto, argv[i]);

		while (palabra != NULL) {
			ocurrencias++;
			palabra = strstr(palabra+1, argv[i]);
		}
		fprintf(archivo2, "Palabra: %s. Ocurrencias: %d\n", argv[i], ocurrencias);
		printf("Palabra: %s. Ocurrencias: %d\n", argv[i], ocurrencias);
		ocurrencias = 0;
	}
}