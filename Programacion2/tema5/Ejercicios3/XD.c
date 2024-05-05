#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nombre[20];
	char apellido[20];
	int edad;
} alumno;

void lista(FILE *archivo, alumno *primeralumno, int *alumnosnoguardados);
void anadir(FILE *archivo, alumno *primeralumno, int *alumnosnoguardados);
void guardar(FILE *archivo, alumno *primeralumno, int *alumnosnoguardados);
void salir(FILE *archivo, alumno *primeralumno);

void main() {
	FILE *archivo = fopen("alumnos.txt", "a+");
	
	alumno *primeralumno = (alumno *) calloc(1, sizeof(alumno));
	
	int *alumnosnoguardados;
	int direccion = 0;
	alumnosnoguardados = &direccion;
	
	int opcion;
	
	while (opcion != 4) {
		printf("Pulsa 1 para ver la lista de alumnos\n");
		printf("Pulsa 2 para anadir algun alumno\n");
		printf("Pulsa 3 para guardar el archivo\n");
		printf("Pulsa 4 para salir\n");
	
		scanf("%d", &opcion);
		while(getchar() != '\n');
		
		switch(opcion) {
			case 1:
				lista(archivo, primeralumno, alumnosnoguardados);
				rewind(archivo);
			break;
			case 2:
				anadir(archivo, primeralumno, alumnosnoguardados);
			break;
			case 3:
				guardar(archivo, primeralumno, alumnosnoguardados);
			break;
			case 4:
				salir(archivo, primeralumno);
			break;
			default: printf("Opcion no valida\n");
		}
	}
	
	fclose(archivo);
}

void lista(FILE *archivo, alumno *primeralumno, int *alumnosnoguardados) {
	rewind(archivo);
	while (!feof(archivo)) {	
		char caracter = getc(archivo);			// Como ya he dicho en el ejercicio 2, me funciona mejor getc que fgets
		if (caracter == '\n') {
			printf(", Estado: Guardado");
		}
		printf("%c", caracter);
	}
	printf(", Estado: Guardado\n");
	for (int i = 0; i < *alumnosnoguardados; i++) {
		printf("Nombre: %s, Apellido: %s, Edad: %d, Estado: No guardado\n", (primeralumno+i)->nombre, (primeralumno+i)->apellido, (primeralumno+i)->edad);
	}
}

void anadir(FILE *archivo, alumno *primeralumno, int *alumnosnoguardados) {
	*(alumnosnoguardados) += 1;
	primeralumno = (alumno *) realloc(primeralumno, sizeof(alumno) * (*alumnosnoguardados));
	printf("Introduce el nombre, primer apellido y edad del alumno\n");
	scanf("%s %s %d", (primeralumno+*alumnosnoguardados-1)->nombre, (primeralumno+*alumnosnoguardados-1)->apellido, (primeralumno+*alumnosnoguardados-1)->edad);
	// Es posible que dé un segfault tras introducir las cosas
	// Por alguna razón, si se pone una letra en el tercer campo, esto no ocurre
	while (getchar() != '\n');
}

void guardar(FILE *archivo, alumno *primeralumno, int *alumnosnoguardados) {		// No es posible guardar más de un alumno a la vez
	for (int i = 0; i < *alumnosnoguardados; i++) {
		fprintf(archivo, "\nNombre: %s, Apellido: %s, Edad: %d\n", (primeralumno+i)->nombre, (primeralumno+i)->apellido, (primeralumno+i)->edad);
	}
	(*alumnosnoguardados) = 0;
	printf("El archivo ha sido guardado. Pulsa 1 para ver los resultados\n");
}

void salir(FILE *archivo, alumno *primeralumno) {
	fclose(archivo);
	free(primeralumno);
}