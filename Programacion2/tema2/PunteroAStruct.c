#include <stdio.h>

typedef struct {
	char nombre[10];
	int edad;
} alguien;

void main() {
	alguien persona;
	alguien *ppersona;
	ppersona = &persona;
	
	ppersona->edad = 2147483647;
	funcion(ppersona);
	printf("Y ahora es de %d anos", ppersona->edad);
}

void funcion(alguien *ppersona) {
	printf("La edad de la persona es de %d anos", ppersona->edad);
	ppersona->edad++;
}