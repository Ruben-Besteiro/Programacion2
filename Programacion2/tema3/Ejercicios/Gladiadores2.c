#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct {
	char nombre[10];
	char arma[6];
	int fuerza;
} gladiador;

void main(int argc, char *argv[]) {		// Los argumentos de argv van a tener que ir separados por espacios en vez de por comas
	srand(getpid());					// porque nadie en su sano juicio lo hace así
	gladiador jugador, cpu;
	int *pvidajugador, *pvidacpu;
	int vidajugador = 100;
	int vidacpu = 100;
	pvidajugador = &vidajugador;
	pvidacpu = &vidacpu;
	
	strcpy(jugador.nombre, argv[1]);
	strcpy(cpu.nombre, argv[2]);
	strcpy(jugador.arma, argv[3]);
	strcpy(cpu.arma, argv[4]);
	
	printf("El jugador se llama %s, su arma es %s, tiene %d de fuerza y %d de vida", jugador.nombre, jugador.arma, jugador.fuerza, *pvidajugador);
	printf("La CPU se llama %s, su arma es %s, tiene %d de fuerza y %d de vida", cpu.nombre, cpu.arma, cpu.fuerza, *pvidajugador);
}