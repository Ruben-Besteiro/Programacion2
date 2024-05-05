#include <stdio.h>
#include <stdlib.h>

char **leertexto (int nlineas, FILE *archivo);


void main() {
	FILE *archivo = fopen("XD.txt", "r");
	int nlineas;
	scanf("%d", nlineas);
	
	char **lineas = leertexto(nlineas, archivo);
	fclose(archivo);
}

char **leertexto (int nlineas, FILE *archivo) {
	for (int i = 0; i < nlineas;) {
		printf("%c", (char caracter = getc(archivo)));
		if (getc(archivo) == '\n') {
			i++;
		}
	}
}