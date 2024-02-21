#include <stdio.h>

void main() {
	char cadena1[30];
char cadena2[30];
	
	char * pcadena2;
	pcadena2 = &cadena2[0];
	
	printf("Introduce una cadena: ");
	fgets(cadena1, 30, stdin);
	
	for (int i = 0; i < 30; i++) {
		*(pcadena2+i) = cadena1[i];
	}
	
	printf("La cadena ha sido copiada en la direccion %p: ", *pcadena2);
	for (int i = 0; i < 30; i++) {
		printf("%c", *(pcadena2+i));
	}
}