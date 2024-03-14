#include <stdio.h>
#include <stdlib.h>

void main() {
	int *iniciolista = (int *) malloc(4000);
	printf("Hemos reservado memoria suficiente para almacenar 1.000 numeros\n");

	
	printf("Introduce una lista de 5 numeros: ");
	scanf("%d %d %d %d %d", iniciolista, iniciolista+1, iniciolista+2, iniciolista+3, iniciolista+4);
	
	printf("Lo que hay en memoria es:\n");
	for (int i = 0; i < 1000; i++) {
		printf("%d ", *(iniciolista+i));
	}
	printf("\n");
	
	//printf("Como puedes ver, la gran mayoria de la memoria esta siendo desperdiciada\n");
	printf("Vamos a reservar mas memoria aun\n");
	
	iniciolista = (int *) realloc(iniciolista, 2147483647);
	printf("Ahora se han reservado 2147483647 direcciones de memoria, por lo que es muy probable que el bloque de direcciones se haya cambiado de sitio\n");
	
	/*for (int i = 0; i < 2147483647; i++) {		Si se quita el /* * /, el programa mostraría las 2.000 millones de direcciones de memoria
		printf("%d ", *(iniciolista+i));
	}*/
	
	printf("Obviamente no necesitamos tantas, por lo que reduciremos el bloque de direcciones a solo 5\n");
	iniciolista = (int *) realloc(iniciolista, 20);
	printf("Las direcciones de memoria mas alla de la 5 aun son accesibles, pero estan marcadas como libres\n");
	
	for (int i = 0; i < 2147483647; i++) {		// El programa intenta llegar hasta el 2.000 millones, pero acaba dándole un segfault
		printf("%d ", *(iniciolista+i));
	}
}