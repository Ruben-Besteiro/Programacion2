#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *archivo;
	archivo = fopen("quevivaelmaincra.txt", "r");
	
	if (archivo == NULL) {
		printf("El archivo no existe :(\n");
	} else {
		for (int i = 'a'; i <= 'z'; i++) {
			putc(i, archivo);
		}
	}
	fputs("\nQue viva el Maincra", archivo);
	
	int ascii = 1;
	
	while (ascii != '0') {
		ascii = getc(archivo);
		printf("%c", ascii);
	}
	
	fclose(archivo);
}