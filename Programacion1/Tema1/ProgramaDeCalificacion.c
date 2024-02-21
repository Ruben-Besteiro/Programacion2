/* Programa de calificación */
#include <stdio.h>

void main () {
	float nota;
	
	printf("Inserta una nota (0-10)");
	scanf("%f");
	
	if (nota < 5) {
		printf("Suspenso");
	} else if (nota < 9) {
		printf("Aprobado");
	} else {
		printf("Sobresaliente");
	}
}