#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
   char nombre[10];
} autor, *pautor = &autor;		// Parece ser que para declarar una estructura de tipo puntero es necesario hacer estos pasos

struct {
   struct autor *pautor;
} libro;

void main() {
	printf("Introduce el nombre antiguo de un autor: ");
	fgets(pautor->nombre, 10, stdin);
	while (getchar() != '\n');
	printf("El autor se llamaba ");
	for (int i = 0; i < 10; i++) {
		printf("%c", pautor->nombre[i]);
	}
	printf("\n");
	
	printf("Ahora introduce su nombre nuevo: ");
	fgets(pautor->nombre, 10, stdin);
	while (getchar() != '\n');
	printf("Su nombre fue cambiado a ");
	for (int i = 0; i < 10; i++) {
		printf("%c", pautor->nombre[i]);
	}
}