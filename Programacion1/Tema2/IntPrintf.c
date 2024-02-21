#include <stdio.h>

void main() {
	int salidaprintf = 0;
	salidaprintf = printf("XD XD XD\n");		// Al entero salidaprintf se le asigna el número de caracteres del printf al otro lado del =, o sea 9
	printf("%d", salidaprintf);
	printf("%c", salidaprintf);					// El char correspondiente al 9 es una señal de control, por lo tanto no se muestra nada
}