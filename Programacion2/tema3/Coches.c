#include <stdio.h>
#include <stdlib.h>

typedef enum {
	coche, moto
} tipo;

typedef struct {
	char *nombre;
	char matricula[10];
	short acel;
} coche;

typedef struct {
	char *nombre;
	short cilindrada;
	short peso;
} moto;

typedef union {
	coche coche;
	moto moto;
} vehiculo;

void main() {
	short opcion;
	vehiculo *flota = (vehiculo *) malloc(sizeof(vehiculo));
	
	short *pcantidadvehiculos;
	short cantidadvehiculos = 0;
	pcantidadvehiculos = &cantidadvehiculos;
	
	while (opcion != 3) {
		printf("Pulsa 1 para introducir uno o varios vehiculos\n");
		printf("Pulsa 2 para ver los vehiculos anadidos\n");
		printf("Pulsa 3 para salir\n");
		
		switch(opcion) {
			case 1: meterVehiculos();
			break;
			case 2: verFlota();
			break;
			case 3: salir();
			break;
			default: printf("Eres tonto\n");
		}
	}
}


void 