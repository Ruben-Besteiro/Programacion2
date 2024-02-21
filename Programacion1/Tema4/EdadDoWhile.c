#include <stdio.h>

void main() {
	int bucle = -1, edad = 0;
	
	do {
		printf("Tu edad es %d.\n", edad);
		bucle++;
	} while (bucle == 0); {
		printf("Introduce tu edad: ");
		scanf("%d", &edad);
	
	int resultadoscanf = scanf("%d", &edad);
		
	if (edad < 0 || resultadoscanf != 1 || getchar() != '\n')
		printf("Error. Vuelve a intentarlo.\n");
	
	}
}