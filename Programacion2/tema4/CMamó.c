#include <stdio.h>
#include <stdlib.h>
	
typedef struct {
	char nombres[20];
	char apellido[20];
	char telefono [15];
} registro;

void main {
	registro registros[10];
	FILE *archivo;
	
	if ((archivo = fopen("archivo.txt", "r")) == NULL) {
		printf("Error\n");
		exit(1);
	}
	
	while (!feof(archivo)) {
		if (fread (&registro, sizeof(registro), 1, archivo)) {
			printf("Nombre: %s\n", registro.nombre);
			printf("Apellido: %s\n", registro.apellido);
			printf("Telefono: %s\n", registro.telefono);
		}
	}
	fclose(archivo);
}