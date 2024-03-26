#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *nombre;
	float latitud;
	float longitud;
} estacion;

typedef enum {
	MP3, WAV, WMA, OGG
} formato;

typedef struct {
	char *nombre;
	short dia;
	short mes;
	short año;
	formato formato;
	char *nombreestacion;
} grabacion;


void nuevaGrabacion(grabacion *primeragrabacion, int *pcantidadgrabaciones);
void nuevaEstacion(estacion *primeraestacion, int *pcantidadestaciones);
void nuevaEstacion(estacion *primeraestacion, int *pcantidadestaciones);
void asignacion(grabacion *primeragrabacion, estacion *primeraestacion);
void verEstaciones(estacion *primeraestacion, int *pcantidadestaciones, grabacion *primeragrabacion, int *pcantidadgrabaciones);
void salir(grabacion *primeragrabacion, estacion *primeraestacion);
//void leeLineaDinamica(char *(primeragrabacion+*pcantidadgrabaciones)->nombre);


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
			case 3: asignacion(primeragrabacion, primeraestacion);
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
	//fgets(((primeragrabacion+(*pcantidadgrabaciones))->nombre), 20, stdin);
	leeLineaDinamica(primeragrabacion, pcantidadgrabaciones);
	
	do {
		printf("Fecha (dia/mes/ano): ");
		intscanf = scanf("%d/%d/%d", &(primeragrabacion+*pcantidadgrabaciones)->dia, &(primeragrabacion+*pcantidadgrabaciones)->mes, &(primeragrabacion+*pcantidadgrabaciones)->año);
		while(getchar() != '\n');
	} while (intscanf != 3);			// Es posible que el programa de la nada decida parar la ejecución después de ejecutar esto
	
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
	//fgets((primeraestacion+*pcantidadestaciones)->nombre, 20, stdin);
	leeLineaDinamica2(primeraestacion, pcantidadestaciones);
	
	do {
		printf("Coordenadas: ");
		intscanf3 = scanf("%f %f", &((primeraestacion+*pcantidadestaciones-1)->latitud), &((primeraestacion+*pcantidadestaciones-1)->longitud));
	} while (intscanf3 != 2);
}


void asignacion(grabacion *primeragrabacion, estacion *primeraestacion) {
	int idgrabacion, idestacion;
	printf("Escoge un id de grabacion (empezando por el 1): ");
	scanf("%d", &idgrabacion);
	idgrabacion;
	printf("Has escogido ");
	for (int i = 0; i < 20; i++) {
		printf("%c", (primeragrabacion+idgrabacion)->nombre[i]);
		if ((primeragrabacion+idgrabacion)->nombre[i] == '\n') {		// Esto lo que hace es impedir que se muestre basura por pantalla
			break;
		}
	}
	printf("\n");
	
	printf("Ahora elige un id de estacion que asignarle a dicha grabacion: ");
	scanf("%d", &idestacion);
	idestacion;
	
	for (int i = 0; i < 20; i++) {
		(primeragrabacion+idgrabacion)->nombreestacion[i] = (primeraestacion+idestacion)->nombre[i];
	}
	printf("Has escogido ");
	for (int i = 0; i < 20; i++) {
		printf("%c", (primeragrabacion+idgrabacion)->nombreestacion[i]);
		if ((primeragrabacion+idgrabacion)->nombreestacion[i] == '\n') {		// Esto lo que hace es impedir que se muestre basura por pantalla
			break;
		}
	}
	printf("\n");
}


void verEstaciones(estacion *primeraestacion, int *pcantidadestaciones, grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	for (int i = 1; i < *pcantidadestaciones+1; i++) {
		printf("Estacion %d:\n", i);
		
		printf("Su nombre es: ");
		for (int j = 0; j < 20; j++) {
			printf("%c", ((primeraestacion+i)->nombre)+j);
			if (((primeraestacion+i)->nombre)+j == '\n') {		// Esto lo que hace es impedir que se muestre basura por pantalla
				break;
			}
		}
		
		printf("Sus coordenadas son %f %f\n", (primeraestacion+i-1)->latitud, (primeraestacion+i-1)->longitud);
		
		printf("Sus grabaciones son:");
		/*for (int i = 0; i < *pcantidadestaciones; i++) {
			if (strcmp((primeraestacion+i)->nombre, (primeragrabacion+i)->nombreestacion)) {
				printf(" %s ", (primeraestacion+i)->nombre);
			}
		}*/
		printf("\n");
	}
}


void salir(grabacion *primeragrabacion, estacion *primeraestacion) {
	printf("Has elegido ir");
	free(primeragrabacion);
	free(primeraestacion);
	exit(0);
}


void leeLineaDinamica(grabacion *primeragrabacion, int *pcantidadgrabaciones) {
	//fgets((primeragrabacion+*pcantidadgrabaciones)->nombre, 20, stdin);
	int i = 0;
	char caracter;
	while ((caracter = getchar()) != '\n') {
		*(((primeragrabacion+*pcantidadgrabaciones)->nombre)+i) = caracter;
	}
}

void leeLineaDinamica2(grabacion *primeraestacion, int *pcantidadestaciones) {
	//fgets((primeragrabacion+*pcantidadgrabaciones)->nombre, 20, stdin);
	int i = 0;
	char caracter;
	while ((caracter = getchar()) != '\n') {
		*(((primeraestacion+*pcantidadestaciones)->nombre)+i) = caracter;
	}
	printf("Has elegido: ");
	for (int j = 0; j < 20; j++) {
		//printf("%c", *((primeraestacion+*pcantidadestaciones)->nombre+i);
	}
}