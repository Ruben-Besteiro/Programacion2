#include <stdio.h>

void LeeEmail (char email[]);
int ComprobarEmail (char email[]);
int bucle = 0;

void main () {
	char email [50];
	printf("Introduce un email: ");
	
	while (bucle == 0) {
		LeeEmail (email);
		
		if (ComprobarEmail (email) == 1) {
			printf("El email es valido");
			bucle++;
		} else {
			printf("El email no es valido. Vuelve a intentarlo: ");
			getchar();
		}
	}
}

void LeeEmail (char email[]) {
	fgets(email, 50, stdin);
/*	
	while (email[strlen(email) - 1] != '\n') {	// No supe hacer esto sin usar un strlen :v XD ._.
		scanf("%50[^n]s", &email);				// No entiendo qué cojones es esto
	}
	
	email[strlen(email - 1)] = '\0';*/
}

int ComprobarEmail (char email[]) {
	int posicionpt = -1;
	for (int i = 0; i < 50; i++) {
		if (email [i] == '.' && i > 2) {		// Si hay un punto Y está más allá de la segunda posición
			posicionpt = i;
			break;
		}
	}
	
	if (posicionpt == -1) {						// Si no hay ningún punto
		return 0;
	}

	int posicionarroba = -1;
	for (int i = posicionpt + 1; i < 50; i++) {
		if (email[i] == '@' && i > 5) {			// Si hay una arroba Y está más allá de la quinta posición
			posicionarroba = i;
			break;
		}
	}
	
	if (posicionarroba == -1) {					// Si no hay ninguna arroba
		return 0;
	}
	
	if (email[posicionarroba + 1] == 'l' && email[posicionarroba + 2] == 'i' && email[posicionarroba + 3] == 'v' && email[posicionarroba + 4] == 'e' && email[posicionarroba + 5] == '.' && email[posicionarroba + 6] == 'u' && email[posicionarroba + 7] == '-' && email[posicionarroba + 8] == 't' && email[posicionarroba + 9] == 'a' && email[posicionarroba + 10] == 'd' && email[posicionarroba + 11] == '.' && email[posicionarroba + 12] == 'c' && email[posicionarroba + 13] == 'o' && email[posicionarroba + 14] == 'm') {
		return 1;								// Esto es si el dominio está tal cual. Como el correo ha pasado todos los checks, la función devuelve 1
	} else {
		return 0;
	}
}