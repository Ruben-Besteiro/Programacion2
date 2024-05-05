#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *nombre;
	char *apellido;
	int edad;
	int estado;
} alumno;

void anadir();

void main() {
	FILE *archivo = fopen("alumnos.txt", "a+");
	printf("%p", archivo);
	
	printf("Pulsa 1 para listar los alumnos que hay\n");
	printf("Pulsa 2 para anadir un alumno\n");
	printf("Pulsa 3 para guardar los alumnos en el archivo\n");
	
	int opcion;
	scanf("%d", opcion);
	
	switch (opcion) {
		case 1:
			printf("%c", (char)getc(archivo));
		break;
		case 2:
			anadir();
		break;
		case 3:
			fputs("X", archivo);
		break;
		default: ("Error\n");
	}
	
	fclose(archivo);
}


void anadir() {
}

void guardar() {
}