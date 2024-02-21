// Programa de calificación
#include <stdio.h>

void main () {
	int nota;
	
	printf("Inserta una nota (0-10): ");
	scanf("%d", &nota);
	
	if (nota < 0) {
		printf("La nota no está entre 0 y 10. Vuelve a intentarlo.");
	} else if (nota < 5) {
		printf ("Suspenso");
	} else if (nota < 9) {
		printf("Aprobado");
	} else if (nota <= 10) {
		printf("Sobresaliente");
	} else {
		printf("La nota no está entre 0 y 10. Vuelve a intentarlo.");
	}
}