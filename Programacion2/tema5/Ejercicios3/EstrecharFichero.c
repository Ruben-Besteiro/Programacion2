#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Debes poner un numero por argv");
		exit(1);
	}
	
	int numero = atoi(argv[1]);
	printf("El numero que has elegido por argv es %d\n", numero);
	numero--;
	
	FILE *archEntrada = fopen("archEntrada.txt", "r");
	FILE *archSalida = fopen("archSalida.txt", "w");
	
	char frase[50][50];

	for (int i = 0; !feof(archEntrada); i++) {
		int j;
		for (j = 0; j < numero; j++) {
			frase[i][j] = getc(archEntrada);		// Funciona mejor usando getc en lugar de fgets
			if (frase[i][j] == '\n') {
				frase[i][j] = ' ';
			}
			if (((frase[i][j] < 'A') || (frase[i][j] > 'Z' && frase[i][j] < 'a') || (frase[i][j] > 'z')) && frase[i][j] != ' ' && frase[i][j] != ',' && frase[i][j] != '.') {
				frase[i][j] = ' ';
			}
		}
		
		if (j % numero == 0) {
			if (frase[i][j-1] != ' ') {
				frase[i][j] = '-';
				frase[i][j+1] = '\n';
			} else {
				frase[i][j] = '\n';
			}
		}
	}
	
	for (int i = 0; frase[i][0] != '\0'; i++) {
		printf("%s", frase[i]);
		fputs(frase[i], archSalida);
	}
	
	fclose(archEntrada);
	fclose(archSalida);
	exit(0);
}