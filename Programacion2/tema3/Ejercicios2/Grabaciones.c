#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char nombreestacion[20];
} grabacion;


void nuevaGrabacion(grabacion *primeragrabacion, int *pcantidadgrabaciones);
void nuevaEstacion(estacion *primeraestacion, int *pcantidadestaciones);
void nuevaEstacion(estacion *primeraestacion, int *pcantidadestaciones);
void asignacion(grabacion *primeragrabacion, estacion *primeraestacion, int *pcantidadgrabaciones, int *pcantidadestaciones);
void verEstaciones(estacion *primeraestacion, int *pcantidadestaciones, grabacion *primeragrabacion, int *pcantidadgrabaciones);
void salir(grabacion *primeragrabacion, estacion *primeraestacion);


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
			case 3: asignacion(primeragrabacion, primeraestacion, pcantidadgrabaciones, pcantidadestaciones);
			break;
			case 4: verEstaciones(primeraestacion, pcantidadestaciones, primeragrabacion, pcantidadgrabaciones);
			break;
			case 5: salir(primeragrabacion, primeraestacion);
			default: printf("Eres tonto\n");
		}
	}
}


void nuevaGrabacion(grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	*(pcantidadgrabaciones) += 1;
	primeragrabacion = (grabacion *) realloc(primeragrabacion, sizeof(grabacion)*(*pcantidadgrabaciones));
	
	int intscanf = 0, intscanf2 = 0;		// Estos se usarán para comprobar si lo que se mete por los scanfs es válido
	
	printf("Grabacion %d\n", (*pcantidadgrabaciones));
	printf("Nombre: ");
	fgets(((primeragrabacion+(*pcantidadgrabaciones))->nombre), 20, stdin);
	
	do {
		printf("Fecha (dia/mes/anio): ");
		intscanf = scanf("%d/%d/%d", &(primeragrabacion+*pcantidadgrabaciones)->dia, &(primeragrabacion+*pcantidadgrabaciones)->mes, &(primeragrabacion+*pcantidadgrabaciones)->año);
		while(getchar() != '\n');
	} while (intscanf != 3);		// Es posible que de la nada el programa decida parar la ejecución cuando se introduce la fecha
	
	do {
		printf("Formato (0 = MP3, 1 = WAV, 2 = WMA, 3 = OGG): ");
		intscanf2 = scanf("%d", &((primeragrabacion+*pcantidadgrabaciones)->formato));
		while(getchar() != '\n');
	} while (intscanf2 != 1);
}


void nuevaEstacion(estacion *primeraestacion, int *pcantidadestaciones) {
	*(pcantidadestaciones) += 1;
	primeraestacion = (estacion *) realloc(primeraestacion, sizeof(estacion)*(*pcantidadestaciones));
	
	int intscanf3 = 0;
	
	printf("Estacion %d\n", (*pcantidadestaciones));
	printf("Nombre: ");
	fgets((primeraestacion+*pcantidadestaciones)->nombre, 20, stdin);
	
	do {
		printf("Coordenadas: ");
		intscanf3 = scanf("%f %f", &((primeraestacion+*pcantidadestaciones-1)->latitud), &((primeraestacion+*pcantidadestaciones-1)->longitud));
		while(getchar() != '\n');
	} while (intscanf3 != 2);
}


void asignacion(grabacion *primeragrabacion, estacion *primeraestacion, int *pcantidadgrabaciones, int *pcantidadestaciones) {
	if (*pcantidadgrabaciones == 0 || *pcantidadestaciones == 0) {
		printf("Debes introducir al menos una grabacion y una estacion\n");
		return;
	}
	
	int idgrabacion = 0, idestacion = 0;
	printf("Escoge un id de grabacion (empezando por el 1): ");
	scanf("%d", &idgrabacion);
	printf("Has escogido ");
	for (int i = 0; i < 20; i++) {
		printf("%c", (primeragrabacion+idgrabacion)->nombre[i]);		// No va
		if ((primeragrabacion+idgrabacion)->nombre[i] == '\n') {		// Esto lo que hace es impedir que se muestre basura por pantalla
			break;
		}
	}
	printf("\n");
	
	printf("Ahora elige un id de estacion que asignarle a dicha grabacion: ");
	scanf("%d", &idestacion);
	
	for (int i = 0; i < 20; i++) {
		(primeragrabacion+idgrabacion)->nombreestacion[i] = (primeraestacion+idestacion)->nombre[i];
	}
	printf("Has escogido ");
	for (int i = 0; i < 20; i++) {
		printf("%c", (primeragrabacion+idgrabacion)->nombreestacion[i]);
		if ((primeragrabacion+idgrabacion)->nombreestacion[i] == '\n') {
			break;
		}
	}
	printf("\n");
}


void verEstaciones(estacion *primeraestacion, int *pcantidadestaciones, grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	for (int i = 1; i < *pcantidadestaciones+1; i++) {
		printf("Estacion %d:\n", i);
											// Por alguna razón, hacer alguna asignación corrompe la parte de la memoria con la estación asignada
		printf("Su nombre es: ");			// y solamente la estación asignada
		for (int j = 0; j < 20; j++) {
			printf("%c", (primeraestacion+i)->nombre[j]);
			if ((primeraestacion+i)->nombre[j] == '\n') {
				break;
			}
		}
		
		printf("Sus coordenadas son %f %f\n", (primeraestacion+i-1)->latitud, (primeraestacion+i-1)->longitud);
		
		printf("Sus grabaciones son:");
		for (int i = 0; i < *pcantidadestaciones; i++) {
			if (strcmp((primeraestacion+i)->nombre, (primeragrabacion+i)->nombreestacion)) {
				printf(" %s (fecha: %d/%d/%d, formato: ", (primeragrabacion+i)->nombre, (primeragrabacion+i)->dia, (primeragrabacion+i)->mes, (primeragrabacion+i)->año);
			}
			switch ((primeragrabacion+i)->formato) {
				case 0: printf("MP3");
				break;
				case 1: printf("WAV");
				break;
				case 2: printf("WMA");
				break;
				case 3: printf("OGG");
				break;
			}
			printf(" )");
		}
		printf("\n");
	}
}

void salir(grabacion *primeragrabacion, estacion *primeraestacion) {
	printf("Has elegido ir\n");
	free(primeragrabacion);
	free(primeraestacion);
	printf("Gracias por utilizar este programa");
	exit(0);
}