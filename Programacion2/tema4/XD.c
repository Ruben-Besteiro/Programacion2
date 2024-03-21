#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *archivo;
	archivo = fopen("quevivaelmaincra.txt", "rw+");
	
	if (archivo == NULL) {
		printf("El archivo no existe :(\n");
	} else {
		for (int i = 'a'; i <= 'z'; i++) {
			fscanf(archivo, "%c", i);
		}
	}
	fputs("\nQue viva el Maincra", archivo);
	
	int ascii = 1;
	
	while (ascii != '0') {
		ascii = getc(archivo);
		fprintf(archivo, "%c", ascii);
	}
	
	fclose(archivo);
}