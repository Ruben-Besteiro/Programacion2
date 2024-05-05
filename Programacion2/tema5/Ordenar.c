#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *frase1, *frase2, *frase3, *frase4;

void main() {
	char *frases[4] = {
		"La educacion ayuda a la persona a aprender a ser lo que es capaz de ser",
		"Dime y lo olvido, enséñame y lo recuerdo, involucrame y lo aprendo",
		"En cuestiones de cultura y de saber, solo se pierde lo que se guarda, solo se gana lo que se da",
		"Para viajar lejos no hay mejor nave que un libro"
	};

	printf("Frases\n");
	printf("%s\n", frases[0]);
	printf("%s\n", frases[1]);
	printf("%s\n", frases[2]);
	printf("%s\n", frases[3]);
	
	char *frasetemp;
	for (int i = 0; i < 4; i++) {
		for (int j = i+1; j < 4; j++) {
			if (strcmp(frases[i], frases[j]) > 0) {
				frasetemp = frases[i];
				frases[i] = frases[j];
				frases[j] = frasetemp;
			}
		}
	}
	
	printf("Frases ordenadas\n");
	printf("%s\n", frases[0]);
	printf("%s\n", frases[1]);
	printf("%s\n", frases[2]);
	printf("%s\n", frases[3]);
}