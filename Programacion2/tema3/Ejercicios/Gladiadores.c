#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	srand(getpid());
	
	if (argc != 3) {
		printf("Eres tonto");
		exit(1);
	}
	
	int poscoma[4];
	char nombres[2][20];
	
	for (int i = 0; i < 2; i++) {		// Inicializo todos los arrays
		for (int j = 0; j < 20; j++) {
			nombres[i][j] = '\0';
		}
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 20; j++) {
			//nombres[i][j] = *(argv[i]+j);
			if (argv[i+1][j] != ',') {
				nombres[i][j] = argv[i][j];
			} else {
				break;
			}
		}
	}
	
	int tamañonombres[2];
	tamañonombres[0] = 0, tamañonombres[1] = 0;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 20; j++) {
			if (argv[i+1][j] != ',' || argv[i+1][j] != '\0') {
				tamañonombres[i]++;
			} else {
				break;
			}
		}
	}
	
	printf("%d ", tamañonombres[0]);
	printf("%d ", tamañonombres[1]);
	printf("\n");
	printf("%s\n", nombres[0]);
	printf("%s\n", nombres[1]);
	
	/*for (int i = 1; i < argc+1; i++) {
		for (int j = 0; j < 40; i++) 
			if (*(argv[i]+j) == ',') {
				poscoma[i] = j;
			}
		}
	}*/
	
	/*printf("Las posiciones de las comas son: ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", poscoma[i]);
	}*/
	
	
}