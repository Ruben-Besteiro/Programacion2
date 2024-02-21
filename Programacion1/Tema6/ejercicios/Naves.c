#include <stdio.h>
#include <unistd.h>

void GenerarPistas (int posicionj, int posiciono1, int posiciono2);
int AccionJ (char accion);
int AccionO1 ();
int AccionO2 ();

void main () {
	int posicionj = 1, posiciono1 = 1, posiciono2 = 1;
	char accion;
	srand(getpid());
	
	printf("Carrera de naves espaciales (Pulsa Ctrl+C para salir)\n");
	
	while (posicionj < 50 && posiciono1 < 50 && posiciono2 < 50) {		// El while continúa ejecutándose hasta que gane alguien
		GenerarPistas (posicionj, posiciono1, posiciono2);
		
		printf("Elige una accion (a/f): ");
		scanf("%c", &accion);
		posicionj += AccionJ (accion); 
		getchar();			// Limpia el búfer
		
		posiciono1 += AccionO1 ();
		posiciono2 += AccionO2 ();
	}
	
	if (posicionj >= 50) {
		printf("GG");
	} else if (posiciono1 >= 50 || posiciono2 >= 50) {
		printf("Bien pifiada");
	}
}

void GenerarPistas (int posicionj, int posiciono1, int posiciono2) {		// Genera 3 pistas en vez de 1 para permitir que pueda haber naves en la misma casilla
	char pistaj[50];
	char pistao1[50];
	char pistao2[50];
	
	for (int i = 0; i < 50; i++) {
		if (i == posicionj) {
			pistaj[i] = 'J';
		} else {
			pistaj[i] = '-';
		}
	}
	
	for (int j = 0; j < 50; j++) {
		if (j == posiciono1) {
			pistao1[j] = 'O';
		} else {
			pistao1[j] = '-';
		}
	}
	
	for (int k = 0; k < 50; k++) {
		if (k == posiciono2) {
			pistao2[k] = 'O';
		} else {
			pistao2[k] = '-';
		}
	}
	
	for (int i = 1; i < 50; i++) {		// Imprime la pista del jugador carácter por carácter
		printf("%c", pistaj[i]);
	}
	printf("\n");
	
	for (int j = 1; j < 50; j++) {		// Imprime la pista del primer oponente carácter por carácter
		printf("%c", pistao1[j]);
	}
	printf("\n");
	
	for (int k = 1; k < 50; k++) {		// Imprime la pista del segundo oponente carácter por carácter
		printf("%c", pistao2[k]);
	}
	printf("\n");
	
	return;
}


int AccionJ (char accion) {				// Determina cuánto avanza o retrocede el jugador
	int casillas = 0;
	
	if (accion == 'a') {
		int obstaculo = (rand() % 5);
	
		if (obstaculo != 4) {
			casillas = ((rand() % 10) + 1);
			printf("Aceleras y avanzas %d casillas\n", casillas);
		} else {
			casillas = -3;
			printf("Te has chocado con un obstaculo y retrocedes 3 casillas\n");
		}
	} else {
		casillas--;
		printf("Frenas y retrocedes 1 casilla\n");
	}
	return casillas;
}


int AccionO1 () {						// Determina cuánto avanza o retrocede el primer oponente
	int casillas = 0;
	
	int acciono1 = (rand() % 10);
	if (acciono1 < 3) {
		casillas = -3;
		printf("El primer oponente frena y retrocede 1 casilla\n");
	} else {
		int obstaculo = (rand() % 5);
		if (obstaculo != 4) {
			casillas = ((rand() % 10) + 1);
			printf("El primer oponente acelera y avanza %d casillas\n", casillas);
		} else {
			casillas = -3;
			printf("El primer oponente se ha chocado con un obstaculo y retrocede 3 casillas\n");
		}
	}
	return casillas;
}

int AccionO2 () {						// Determina cuánto avanza o retrocede el segundo oponente
	int casillas = 0;
	
	int acciono2 = (rand() % 10);
	if (acciono2 < 3) {
		casillas = -3;
		printf("El segundo oponente frena y retrocede 1 casilla\n");
	} else {
		int obstaculo = (rand() % 5);
		if (obstaculo != 4) {
			casillas = ((rand() % 10) + 1);
			printf("El segundo oponente acelera y avanza %d casillas\n", casillas);
		} else {
			casillas = -3;
			printf("El segundo oponente se ha chocado con un obstaculo y retrocede 3 casillas\n");
		}
	}
	return casillas;
}