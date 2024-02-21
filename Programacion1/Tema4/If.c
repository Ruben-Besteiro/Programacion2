#include <stdio.h>

void main() {
	char letra = 'a';
	
	printf("Introduce un caracter (preferiblemente 's' o 'S'): ");
	scanf("%c", &letra);
	
	if (letra == 's' || letra == 'S') {
		printf("Has escogido la letra %c", letra);
	} else {
		printf("Error: No has escogido 's' o 'S'");
	}
}