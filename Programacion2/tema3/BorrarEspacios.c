#include <stdio.h>
#include <stdlib.h>

char *lld();
void quitarEspacios(char *frase);

void main() {
	char *frase;
	
	printf("Introduce una frase: ");
	frase = lld();
	
	quitarEspacios(frase);
	
	free(frase);
}

char *lld() {
	char *frase = (char *) malloc(sizeof(char));
	char newchar;
	
	int i = 0;
	while ((newchar = getchar()) != '\n') {
		frase = (char *) realloc(frase, sizeof(char)*(i+1));
		frase[i] = newchar;
		i++;
	}
	frase[i] = '\0';
	return frase;
}

void quitarEspacios(char *frase) {
	int tamañofrase = 0;
	for (int i = 0; frase[i] != '\0'; i++) {
		tamañofrase++;
	}
	
	for (int i = 0; i < tamañofrase; i++) {
		if (frase[i] == ' ') {
			for (int j = i; j <= tamañofrase; j++) {
				frase[j] = frase[j+1];
			}
			frase = (char *) realloc(frase, sizeof(char)*(tamañofrase-1));
		}
	}
	printf("La frase sin espacios es: %s", frase);
}