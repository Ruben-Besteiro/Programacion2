#include <stdio.h>
#include <stdlib.h>

typedef struct jugador {
	char nombre[20];
	int goles;
	int dorsal;
}

void main() {
	jugador *jugador1;
	jugador1 = (jugador *) malloc(sizeof(jugador));
	
	FILE *archivo = fopen("jugadores.txt", "a");
	
	int opcion = 0;
	while (opcion != 3) {
		printf("Pulsa 1 para ver la lista de jugadores que hay\n");
		printf("Pulsa 2 para anadir un jugador\n");
		printf("Pulsa 3 para salir\n");
		scanf("%d", &opcion);
	}
	
	switch(opcion) {
		case 1: verJugadores();
		break;
		case 2: añadirJugador();
		break;
		case 3: free(jugador1);
		fclose(archivo);
		exit(0);
		break;
		default: printf("Eres tonto\n");
	}
}

void verJugadores() {
}

void añadirJugador() {
}