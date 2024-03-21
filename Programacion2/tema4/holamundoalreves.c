#include <stdio.h>

void main() {
	FILE *archivo;
	archivo = fopen("holamundo.txt", "r");
	char *string;
	
	fgets(string, 20, archivo);
	printf("%s", string);
	
	fclose(archivo);
}