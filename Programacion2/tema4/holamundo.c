#include <stdio.h>

void main() {
	FILE *archivo;
	archivo = fopen("holamundo.txt", "w");
	
	fputs("Hola mundo", archivo);
	
	fclose(archivo);
}