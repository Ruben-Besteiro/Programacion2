#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nombre[20];
	short edad;
	float altura;
	char carrera[4];
}alumno;

void main(int argc, char *argv[]) {
	alumno *primeralumno = (alumno *) malloc(sizeof(alumno)*(argc-1));
	
	for (int i = 1; i < argc; i++) {
		for (int j = 0; j < 20; j++) {
			(primeralumno+i-1)->nombre[j] = argv[i][j];
		}
	}
	
	/*for (int i = 0; i < argc-1; i++) {
		printf("Alumno %d: %s\n", i+1, (primeralumno+i)->nombre);
	}*/
	
	int opcion;
	do {
		printf("Pulsa 1 para ver la lista de alumnos que hay\n");
		printf("Pulsa 2 para anadir datos de algun alumno\n");
		printf("Pulsa 3 para ir\n");
		scanf("%d", &opcion);
		
		switch (opcion) {
			case 1: verClase();
			break;
			case 2: añadirDatos();
			break;
			case 3: ir();
			break;
			default: printf("Eres tonto");
		}
	} while (opcion != 3);
}

void ir() {
}