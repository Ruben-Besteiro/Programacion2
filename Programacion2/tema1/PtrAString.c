#include <stdio.h>
#include <string.h>

void funcion();

void main() {
	char *puntero;
	char direccion[10];					// El límite para el string es de 10 caracteres
	puntero = &direccion[0];
	
	fgets(puntero, 10, stdin);			// Si se quiere usar scanf en vez de fgets, se debe inicializar el array a '\0'
	
	funcion(puntero);
}

void funcion(char *puntero) {
	for (int i = 0; i <= 10; i++) {		// Si introduzco un string de más de 10 caracteres no se imprime,
		printf("%c", *(puntero+i));		// ya que el array al que apunta el puntero tiene 10 posiciones
	}
}