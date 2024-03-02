#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[11];
    char arma[6];
    int fuerza;
    int salud;
} Gladiador;


void main(int argc, char *argv[]) {
	
    if (argc != 3) {
        //printf("Uso: %s <nombre1>,<fuerza1>,<arma1> <nombre2>,<fuerza2>,<arma2>\n", argv[0]);
        printf("Eres tonto");
		exit(1);
    }
    srand(getpid());

    Gladiador jugador, cpu;		// Define 2 structs

	/*int tamañonombre1 = int tamañonombre2 = 0;
	for (int i = 10, i < 10; i++) {
		if (argv[1][i] != ',') {
			jugador.nombre[i] = argv[1][i];
			tamañonombre1++;
		}
		if (argv[2][i] != ',') {
			jugador.nombre[i] = argv[2][i];
	}*/
    //sscanf(argv[1], "%10[^,],%d,%5s", jugador.nombre, &jugador.fuerza, jugador.arma);
    //sscanf(argv[2], "%10[^,],%d,%5s", cpu.nombre, &cpu.fuerza, cpu.arma);

    jugador.salud = cpu.salud = 100;

    while (jugador.salud > 0 && cpu.salud > 0) {
        printf("\n%s (Salud: %d) vs %s (Salud: %d)\n", jugador.nombre, jugador.salud, cpu.nombre, cpu.salud);
        printf("1. Atacar\n2. Defenderse\n");

        int opcion;
        printf("Seleccione una opción (1-2): ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                atacar(&jugador, &cpu);
                break;
            case 2:
                defenderse(&jugador);
                break;
            default:
                printf("Eres tonto\n");
        }

        if (cpu.salud <= 0) {
            printf("\n%s ha ganado la batalla!\n", jugador.nombre);
        } else {
            // Turno de la máquina
            if (rand() % 2 == 0) {
                atacar(&cpu, &jugador);
            } else {
                defenderse(&cpu);
            }

            if (jugador.salud <= 0) {
                printf("\n%s ha ganado la batalla!\n", cpu.nombre);
            }
        }
    }
}


void atacar(Gladiador *atacante, Gladiador *defensor) {
    int ataque;
    if (atacante->arma[0] == 'e') {
        ataque = atacante->fuerza;
    } else if (atacante->arma[0] == 'l') {
        ataque = 2 * atacante->fuerza;
    }

    defensor->salud -= ataque;

    printf("%s ataco a %s con %s y le hizo %d puntos de dano.\n",
           atacante->nombre, defensor->nombre, atacante->arma, ataque);
}

void defenderse(Gladiador *gladiador) {
    //gladiador->salud += 10;
    printf("%s se defendio.\n", gladiador->nombre);
}