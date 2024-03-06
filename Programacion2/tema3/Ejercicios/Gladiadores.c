#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct {
	char nombre[10];
	char arma[6];
	int fuerza;
} gladiador;

void turno (gladiador jugador, gladiador cpu, int *pvidajugador, int *pvidacpu, int accionjugador, int accioncpu);

void main(int argc, char *argv[]) {		// Los argumentos de argv van a tener que ir separados por espacios en vez de por comas
	srand(getpid());					// porque nadie en su sano juicio lo hace con comas
	
	gladiador jugador, cpu;
	int *pvidajugador, *pvidacpu;
	int vidajugador = 100;
	int vidacpu = 100;
	pvidajugador = &vidajugador;
	pvidacpu = &vidacpu;
	
	strcpy(jugador.nombre, argv[1]);
	strcpy(jugador.arma, argv[2]);
	jugador.fuerza = (int) strtol(argv[3], NULL, 10);
	strcpy(cpu.nombre, argv[4]);
	strcpy(cpu.arma, argv[5]);
	cpu.fuerza = (int) strtol(argv[6], NULL, 10);
	
	if (jugador.arma[0] == 'l' && jugador.arma[1] == 'a' && jugador.arma[2] == 'n' && jugador.arma[3] == 'z' && jugador.arma[4] == 'a') {
		jugador.fuerza *= 2;
	}
	
	if (cpu.arma[0] == 'l' && cpu.arma[1] == 'a' && cpu.arma[2] == 'n' && cpu.arma[3] == 'z' && cpu.arma[4] == 'a') {
		cpu.fuerza *= 2;
	}
	
	int accionjugador = 0, accioncpu = 0;
	
	while (*pvidajugador > 0 && *pvidacpu > 0) {								// Hago que el jugador y el oponente elijan sus acciones a la vez
		printf("Turno de %s (vida: %d)\n", jugador.nombre, *pvidajugador);		// como en Pokémon
		printf("Pulsa 1 para atacar y 2 para defenderte\n");
		do {
			scanf("%d", &accionjugador);
			if (accionjugador == 1) {
				printf("Has decidido atacar\n");
			} else if (accionjugador == 2) {
				printf("Has decidido defenderte\n");
			}
		} while (accionjugador < 1 || accionjugador > 2);
		
		printf("Turno de %s (vida: %d)\n", cpu.nombre, *pvidacpu);
		accioncpu = (rand() % 2 + 1);
		if (accioncpu == 1) {
			printf("%s ha decidido atacar\n", cpu.nombre);
		} else {
			printf("%s ha decidido defenderse\n", cpu.nombre);
		}
		
		turno(jugador, cpu, pvidajugador, pvidacpu, accionjugador, accioncpu);
		printf("\n");
	}
	
	if (vidacpu <= 0 && vidajugador > 0) {
		printf("El ganador es: %s", jugador.nombre);
	} else if (vidacpu > 0 && vidajugador <= 0)  {
		printf("El ganador es: %s", cpu.nombre);
	} else {
		printf("Tu y tu oponente habeis muerto a la vez, por lo que la batalla ha terminado en empate");
	}
}

void turno (gladiador jugador, gladiador cpu, int *pvidajugador, int *pvidacpu, int accionjugador, int accioncpu) {
	
	if (accionjugador == 1 && accioncpu == 1) {
		printf("Has atacado a %s y ha recibido %d puntos de dano\n", cpu.nombre, jugador.fuerza);
		*pvidacpu -= jugador.fuerza;
		printf("%s te ha atacado y has recibido %d puntos de dano\n", cpu.nombre, cpu.fuerza);
		*pvidajugador -= cpu.fuerza;
	} else if (accionjugador == 2 && accioncpu == 1) {
		printf("Te has defendido del ataque de %s y no has recibido dano\n", cpu.nombre);
	} else if (accionjugador == 1 && accioncpu == 2) {
		printf("%s se ha defendido de tu ataque y no ha recibido dano\n", cpu.nombre);
	} else {
		printf("Los dos os habeis defendido\n");
	}
}