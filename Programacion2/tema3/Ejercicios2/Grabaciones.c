#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *nombre;
	float latitud;
	float longitud;
} estacion;

typedef struct {
	char nombre[20];
	short dia;
	short mes;
	short año;
	char formato[3];
	estacion estacion;
} grabacion;


void main() {
	int numero;
	grabacion *primeragrabacion = (grabacion *) malloc(sizeof(grabacion));
	
	int *pcantidadgrabaciones;
	int cantidadgrabaciones = 0;
	pcantidadgrabaciones = &cantidadgrabaciones;
	
	while(1) {
		printf("Pulsa 1 para anadir una grabacion\n");
		printf("Pulsa 2 para anadir una estacion\n");
		printf("Pulsa 3 para asignar grabaciones a estaciones\n");
		printf("Pulsa 4 para mostrar los datos de alguna grabacion\n");
		printf("Pulsa 5 para irte a tomar por culo\n");
	
		scanf("%d", &numero);
		while(getchar() != '\n');
		switch(numero) {
			case 1: nuevaGrabacion(primeragrabacion, pcantidadgrabaciones);
			break;
			case 2: nuevaEstacion();
			break;
			case 3: asignacion();
			break;
			case 4: verGrabacion();
			break;
			default: printf("Eres tonto\n");
		}
	}
}


void nuevaGrabacion(grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	primeragrabacion = (grabacion *) realloc(primeragrabacion, sizeof(grabacion)*(*pcantidadgrabaciones)+1);
	
	printf("Grabacion %d\n", (*pcantidadgrabaciones)+1);
	printf("Introduce su nombre: ");
	
	//while(getchar() != '\n');
	scanf("[^\n]%s", (primeragrabacion+(sizeof(grabacion)*(*pcantidadgrabaciones)))->nombre);
	printf("Su nombre es: ");
	for (int i = 0; i < 20; i++) {
		printf("%c", *((primeragrabacion+(sizeof(grabacion)*(*pcantidadgrabaciones)))->nombre+i));		// ???
	}
	printf("\n");
	
	(*pcantidadgrabaciones)++;
}


void nuevaEstacion() {
}


void asignacion() {
}


void verGrabacion() {
	
}