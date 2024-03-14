#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nombre[20];
	short dia;
	short mes;
	short año;
	char formato[3];
	estacion estacion;
} archivo;

typedef struct {
	char nombre[20];
	float latitud;
	float longitud;
} estacion;

void main() {
	printf("Pulsa 1 para anadir una grabacion\n");
	printf("Pulsa 2 para anadir una estacion\n");
	printf("Pulsa 3 para ");
}