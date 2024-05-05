#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *palabra;
	int ocurrencias;
	int *lineas;
} palabraInfo;

void examinarLinea(FILE *texto, char **lineas, char *argv[]);

void main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Debes pasar una o varias palabras por argv");
		exit(1);
	}
	
	FILE *archivo = fopen("texto.txt", "r");
	//printf("%p", archivo);

	char *texto = (char *) malloc(1000000);
	
	for (int i = 0; !feof(archivo); i++) {
		char caracter = getc(archivo);
		texto[i] = caracter;
		if (texto[i] == '\n' || texto[i] == '.') {
			texto[i] = ' ';
		}
	}
	//printf("%s", texto);
	
	
	int *ocurrencias = (int *) calloc(argc-1, sizeof(int)*(argc-1));
	if (strstr(argv[1], texto) != NULL) {
		oc
	}
	
	
	/**palabras[0] = strtok(texto, " ");
	for (int i = 1; i < 100; i++) {
		printf("XD");
		printf("%s", palabras[i-1]);
		*palabras[i] = strtok(NULL, " ");
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; *(*(palabras+i)+j) != ' '; j++) {
			*(*(palabras+i)+j) = *(texto+i);
		}
	}*/
	
	free(texto);
	fclose(archivo);
	exit(0);
}

/*void examinarLinea(FILE *texto, char **lineas, char *argv[]) {
	char newchar;
	for (int i = 0; !feof(texto); i++) {
		for (int j = 0; (newchar = getc(texto)) != EOF; j++) {
			*(*(lineas+i)+j) = newchar;
			//printf("%c", *(*(lineas+i)+j));
			if (strstr(argv[1], *lineas) != NULL) {			// No va
				printf("%s se ha encontrado en la linea %d", argv[1], i);
			}
		}
	}
}*/