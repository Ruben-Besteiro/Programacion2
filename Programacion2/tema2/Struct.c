#include <stdio.h>

struct persona {
	char nombre[6];
	char apellido[10];
	int edad;
	float altura;
};

void main() {
	struct persona personaXD = {"Untar", "la Manteca", 18, 1.75};
	
	printf("Nombre: %s\n", personaXD.nombre);
	printf("Apellido: %s\n", personaXD.apellido);
	printf("Edad: %d\n", personaXD.edad);
	printf("Altura: %.2f\n", personaXD.altura);
}