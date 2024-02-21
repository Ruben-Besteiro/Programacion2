#include <stdio.h>
	
void main() {
	int bucle = 0;
	
	while (bucle == 0) {
		int edad = 0;
		
		printf("Introduce tu edad: ");
		
		while(getchar() != '\n') {		// Si el primer char que le sale no es un \n, da error
			printf("Error. Vuelve a intentarlo.");
		}
		
		int resultadoscanf = scanf("%d", &edad);
		
		if (edad < 0 || resultadoscanf != 1) {
			printf("Error. Vuelve a intentarlo.\n");
		} else {
			printf("Tu edad es %d.", edad);
			bucle++;
		}
	}
}