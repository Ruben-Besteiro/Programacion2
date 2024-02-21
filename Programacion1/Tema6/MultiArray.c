#include <stdio.h>
#include <stdlib.h>
#define NUM_ALUM 3
#define MAX_CAR_NUM 17

void main () {
	char nombres [NUM_ALUM] [MAX_CAR_NUM];
	char newChar = '\0';
	int j = 0;
	
	printf("Introduce el nombre de los alumnos que quieras: ");
	for (int i = 0; i <= NUM_ALUM; i++) {
		j = 0;
		printf("Alumno %d: ", i);
		while (newChar = (getchar()) != '\n') {
			nombres [i] [j] = newChar;
			j++;
		}
	}
	
	for (int i = 0; i < NUM_ALUM; i++) {
		for (int j = 0; j < MAX_CAR_NUM; j++) {
			printf("%c", nombres [i] [j]);
		}
	}
	
	printf("NombreS: %c", nombres);
}