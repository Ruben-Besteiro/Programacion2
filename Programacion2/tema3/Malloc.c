#include <stdio.h>
#include <stdlib.h>

void main() {
	int gente;
	int *pedades;
	
	printf("Introduce el numero de alumnos de clase: ");
	scanf("%d", &gente);
	while(getchar() != '\n');
	pedades = (int *)malloc(sizeof(int) * gente);
	printf("\n");
	
	printf("Ahora introduce la edad de los alumnos\n");
	for (int j = 0; j < gente; j++) {
		printf("Alumno %d: ", j+1);
		scanf("%d", (pedades + sizeof(int)*j));
		while(getchar() != '\n');
	}
	printf("\n");
	
	float edadmedia = 0;
	for (int k = 0; k < gente; k++) {
		edadmedia += *(pedades + sizeof(int)*k);
	}
	edadmedia /= gente;
	printf("La edad media de la clase es %f", edadmedia);
	printf("\n");
	
	printf("Las edades introducidas son ");
	for (int l = 0; l < gente; l++) {
		printf("%d ", *(pedades + sizeof(int)*l));
	}
	
	free(pedades);
}