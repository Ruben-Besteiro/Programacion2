#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nombre[20];
	float latitud;
	float longitud;
} estacion;

typedef enum {
	MP3, WAV, WMA, OGG
} formato;

typedef struct {
	char nombre[20];
	short dia;
	short mes;
	short año;
	formato formato;
	estacion estacion;
} grabacion;


void main() {
	int numero;
	grabacion *primeragrabacion = (grabacion *) malloc(sizeof(grabacion));
	estacion *primeraestacion = (estacion *) malloc(sizeof(estacion));
	
	int *pcantidadgrabaciones;
	int cantidadgrabaciones = 0;
	pcantidadgrabaciones = &cantidadgrabaciones;
	
	int *pcantidadestaciones;
	int cantidadestaciones = 0;
	pcantidadestaciones = &cantidadestaciones;
	
	while(1) {
		printf("Pulsa 1 para anadir una grabacion\n");
		printf("Pulsa 2 para anadir una estacion\n");
		printf("Pulsa 3 para asignar una estacion a una grabacion\n");
		printf("Pulsa 4 para mostrar los datos de alguna estacion\n");
		printf("Pulsa 5 para ir\n");
	
		scanf("%d", &numero);
		while(getchar() != '\n');
		switch(numero) {
			case 1: nuevaGrabacion(primeragrabacion, pcantidadgrabaciones);
			break;
			case 2: nuevaEstacion(primeraestacion, pcantidadestaciones);
			break;
			case 3: asignacion();
			break;
			case 4: verEstaciones(primeraestacion, pcantidadestaciones, primeragrabacion, pcantidadgrabaciones);
			break;
			case 5: salir(primeragrabacion, primeraestacion);
			default: printf("Eres tonto\n");
		}
	}
}


void nuevaGrabacion(grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	*(pcantidadgrabaciones)++;
	primeragrabacion = (grabacion *) realloc(primeragrabacion, sizeof(grabacion)*(*pcantidadgrabaciones));
	
	int intscanf = 0, intscanf2 = 0;		// Estos se usarán para comprobar si lo que se mete por los scanfs es válido
	
	printf("Grabacion %d\n", (*pcantidadgrabaciones));
	printf("Nombre: ");
	fgets(((primeragrabacion+(*pcantidadgrabaciones))->nombre), 20, stdin);
	
	printf("Su nombre es: ");
	for (int i = 0; i < 20; i++) {
		printf("%c", (primeragrabacion+*pcantidadgrabaciones)->nombre[i]);
	}
	printf("\n");
	
	do {
		printf("Fecha (dia/mes/ano): ");
		intscanf = scanf("%d/%d/%d", &(primeragrabacion+*pcantidadgrabaciones)->dia, &(primeragrabacion+*pcantidadgrabaciones)->mes, &(primeragrabacion+*pcantidadgrabaciones)->año);
		while(getchar() != '\n');
	} while (intscanf != 3);
	
	do {
		printf("Formato (0 = MP3, 1 = WAV, 2 = WMA, 3 = OGG): ");
		intscanf2 = scanf("%d", &((primeragrabacion+*pcantidadgrabaciones)->formato));
		while(getchar() != '\n');
	} while (intscanf2 != 1);
}


void nuevaEstacion(estacion *primeraestacion, int *pcantidadestaciones) {
	*(pcantidadestaciones)++;
	primeraestacion = (estacion *) realloc(primeraestacion, sizeof(estacion)*(*pcantidadestaciones));
	
	printf("Estacion %d\n", (*pcantidadestaciones));
	printf("Nombre: ");
	fgets(((primeraestacion+*pcantidadestaciones)->nombre), 20, stdin);
	
	printf("Coordenadas: ");
	scanf("%f %f", &((primeraestacion+*pcantidadestaciones)->latitud), &((primeraestacion+*pcantidadestaciones)->longitud));
}


void asignacion() {
	
}


void verEstaciones(estacion *primeraestacion, int *pcantidadestaciones, grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	printf("C mamo");
	for (int i = 0; i < *pcantidadestaciones+1; i++) {
		printf("Estacion %d:\n", i);
		
		printf("Su nombre es: ");
		for (int j = 0; j < 20; j++) {
			printf("%c", (primeragrabacion+i)->nombre[j]);
		}
		printf("\n");
		
		//printf("Nombre: %s", (primeraestacion+*pcantidadestaciones)->nombre[i]);
	}
}

void salir(grabacion *primeragrabacion, estacion *primeraestacion) {
	printf("Gracias por utilizar este programa");
	free(primeragrabacion);
	free(primeraestacion);
	exit(0);
}