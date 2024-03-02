#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char jugador1[10];
	char jugador2[10];
} pareja;

typedef struct {
	int juegosequipo1;
	int juegosequipo2;
} resultado;

typedef struct {
	resultado res1vs2[3];
	resultado res1vs3[3];
	resultado res1vs4[3];
	resultado res2vs3[3];
	resultado res2vs4[3];
	resultado res3vs4[3];
} jornada;

void menu(pareja parejas[], jornada *jornadas[]);
void introducirResultado(jornada *jornadas[], pareja parejas[]);
void verResultados(jornada *jornadas[], pareja parejas[]);
void parejaGanadora(jornada *jornadas[], pareja parejas[]);

void main(int argc, char *argv[]) {
	pareja parejas[4];
	jornada *jornadas[3];
	//resultado *resultados[];
	jornada direcciones[3];
	for (int i = 0; i < 3; i++) {
		jornadas[i] = &direcciones[i];
	}
	
	if (argc != 9) {
		printf("Eres tonto");
		exit(1);
	}
	
	if (argv[1] == argv[2] || argv[1] == argv[3] || argv[1] == argv[4] || argv[1] == argv[5] || argv[1] == argv[6] || argv[1] == argv[7] || argv[1] == argv[8] || argv[2] == argv[3] || argv[2] == argv[4] || argv[2] == argv[5] || argv[2] == argv[6] || argv[2] == argv[7] || argv[2] == argv[8] || argv[3] == argv[4] || argv[3] == argv[5] || argv[3] == argv[6] || argv[3] == argv[7] || argv[3] == argv[8] || argv[4] == argv[5] || argv[4] == argv[6] || argv[4] == argv[7] || argv[4] == argv[8] || argv[5] == argv[6] || argv[5] == argv[7] || argv[5] == argv[8] || argv[6] == argv[7] || argv[6] == argv[8] || argv[7] == argv[8]) {
		printf("No puede haber nombres repetidos");		// Chequea que haya algún nombre repetido (o lo haría si funcionase)
		exit(1);
	}
	
	strcpy(parejas[0].jugador1, argv[1]);
	strcpy(parejas[0].jugador2, argv[2]);
	strcpy(parejas[1].jugador1, argv[3]);
	strcpy(parejas[1].jugador2, argv[4]);
	strcpy(parejas[2].jugador1, argv[5]);
	strcpy(parejas[2].jugador2, argv[6]);
	strcpy(parejas[3].jugador1, argv[7]);
	strcpy(parejas[3].jugador2, argv[8]);
	
	for (int i = 0; i < 4; i++) {
		printf("Pareja %d: %s y %s\n", i+1, parejas[i].jugador1, parejas[i].jugador2);
	}
	
	menu(parejas, jornadas);
}

void menu(pareja parejas[], jornada *jornadas[]) {
	int opcion = 0;
	
	do {
		printf("Pulsa 1 para introducir algun resultado\n");
		printf("Pulsa 2 para ver los resultados que ha habido hasta la fecha\n");
		printf("Pulsa 3 para ver la pareja ganadora (solo si se han introducido todos los resultados)\n");
		printf("Pulsa 4 para salir\n");
	
		scanf("%d", &opcion);
		
		switch (opcion) {
			case 1: introducirResultado(jornadas, parejas);
			printf("XD");
			break;
			case 2: verResultados(jornadas, parejas);
			break;
			case 3: parejaGanadora(jornadas, parejas);
			break;
			case 4: printf("Gracias por utilizar este programa");
			exit(0);
			break;
			default: printf("Eres tonto");
		}
	} while (opcion != 4);
}

void introducirResultado(jornada *jornadas[], pareja parejas[]) {
	int jornadaintroducida = -1, partidointroducido = -1;
	
	printf("Elige de que jornada sera el resultado a introducir (1-3): ");
	scanf("%d", &jornadaintroducida);
	printf("Ahora introduce los juegos ganados por cada equipo separados por guion: ");
	switch (jornadaintroducida) {
		case 1:
			printf("Pareja 1 vs Pareja 2: ");
			scanf("%d-%d", &jornadas[0]->res1vs2->juegosequipo1, &jornadas[0]->res1vs2->juegosequipo2);
			printf("Pareja 3 vs Pareja 4: ");
			scanf("%d-%d", &jornadas[0]->res3vs4->juegosequipo1, &jornadas[0]->res3vs4->juegosequipo2);
			break;
		case 2:
			printf("Pareja 1 vs Pareja 3: ");
			scanf("%d-%d", &jornadas[1]->res1vs3->juegosequipo1, &jornadas[1]->res1vs3->juegosequipo2);
			printf("Pareja 2 vs Pareja 4: ");
			scanf("%d-%d", &jornadas[1]->res2vs4->juegosequipo1, &jornadas[1]->res2vs4->juegosequipo2);
			break;
		case 3:
			printf("Pareja 1 vs Pareja 4: ");
			scanf("%d-%d", &jornadas[2]->res1vs4->juegosequipo1, &jornadas[2]->res1vs4->juegosequipo2);
			printf("Pareja 2 vs Pareja 3: ");
			scanf("%d-%d", &jornadas[2]->res2vs3->juegosequipo1, &jornadas[2]->res2vs3->juegosequipo2);
			break;
	}
	
	printf("Resultado introducido con exito\n");
}

void verResultados(jornada *jornadas[], pareja parejas[]) {
	printf("Los resultados que se han introducido son:\n");
	printf("Jornada 1\n");
	printf("%s y %s vs. %s y %s: %d-%d\n", parejas[0].jugador1, parejas[0].jugador2, parejas[1].jugador1, parejas[1].jugador2, jornadas[0]->res1vs2->juegosequipo1, jornadas[0]->res1vs2->juegosequipo2);
	printf("%s y %s vs. %s y %s: %d-%d\n", parejas[2].jugador1, parejas[2].jugador2, parejas[3].jugador1, parejas[3].jugador2, jornadas[0]->res3vs4->juegosequipo1, jornadas[0]->res3vs4->juegosequipo2);
	printf("Jornada 2\n");
	printf("%s y %s vs. %s y %s: %d-%d\n", parejas[0].jugador1, parejas[0].jugador2, parejas[2].jugador1, parejas[2].jugador2, jornadas[1]->res1vs3->juegosequipo1, jornadas[1]->res1vs3->juegosequipo2);
	printf("%s y %s vs. %s y %s: %d-%d\n", parejas[1].jugador1, parejas[1].jugador2, parejas[3].jugador1, parejas[3].jugador2, jornadas[1]->res2vs4->juegosequipo1, jornadas[1]->res2vs4->juegosequipo2);
	printf("Jornada 3\n");
	printf("%s y %s vs. %s y %s: %d-%d\n", parejas[0].jugador1, parejas[0].jugador2, parejas[2].jugador1, parejas[2].jugador2, jornadas[2]->res1vs4->juegosequipo1, jornadas[2]->res1vs4->juegosequipo2);
	printf("%s y %s vs. %s y %s: %d-%d\n", parejas[1].jugador1, parejas[1].jugador2, parejas[3].jugador1, parejas[3].jugador2, jornadas[2]->res2vs3->juegosequipo1, jornadas[2]->res2vs3->juegosequipo2);
}

void parejaGanadora(jornada *jornadas[], pareja parejas[]) {
	// ???
}