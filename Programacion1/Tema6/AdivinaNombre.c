#include <stdio.h>

char Nombre [20] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
char Apellido1 [20] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
char Apellido2 [20] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};

void main () {
	printf("Introduce tu nombre y apellidos y el programa los adivinara\n");
	printf("Nombre: ");
	getchar();
	scanf("%10000[^\n]s", &Nombre);					// Scanf lee hasta el espacio en blanco, pero si le pones esto lo que hace es leer hasta el \n
	printf("Primer apellido: ");
	getchar();
	scanf("%10000[^\n]s", &Apellido1);
	printf("Segundo apellido: ");
	getchar();
	scanf("%10000[^\n]s", &Apellido2);
	
	printf("Tu nombre completo es: %s %s %s", Nombre, Apellido1, Apellido2);
}