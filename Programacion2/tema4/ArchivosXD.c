#include <stdio.h>
#include <stdlib.h>

typedef struct linea {
	int numLineas;
	char *lineas[50];
} lineas;

void main(int argc, char *argv[]) {
	lineas lineas[10];
	fopen("XD.txt", "r");
	
	if (argc < 3) {
		printf("Debes introducir un numero de lineas y el archivo de donde sacarlas\n");
	}
	
	for (int i = 0; i < strtol(argv[1], NULL, 10); i++) {
		fgets(lineas[i].lineas, 50, "XD.txt");
		fprintf("%s", lineas[i].lineas);
	}
}