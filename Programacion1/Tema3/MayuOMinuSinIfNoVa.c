// Esto no es XD
// Mirar la presentación

#include <stdio.h>

void main() {
	char letra = 0;
	int tipo = 0;
	
	printf("Introduce una letra.\n");
	printf("Si es mayuscula, se imprimira '1'\n");
	printf("De lo contrario, se imprimira '0'\n");
	scanf("%c", &letra);
	
	tipo = (letra >= 'A') && (letra <= 'Z');
	
	printf("%d", tipo);
}