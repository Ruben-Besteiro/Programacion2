#include <stdio.h>
#include <stdlib.h>

typedef struct usuario {
	char *nombre;
	char *apellido1;
	char *apellido2;
} usuario;

void main() {
	int gente = 1;
	usuario *usuario1 = (usuario *) malloc(sizeof(usuario));
	
	while(1) {
		usuario1 = (usuario *) realloc(usuario1, sizeof(usuario)*gente);
		printf("Introduce el nombre completo de un usuario: ");
		scanf("%s %s %s", (usuario1+(gente-1))->nombre, (usuario1+(gente-1))->apellido1, (usuario1+(gente-1))->apellido2);
		printf("%s %s %s", (usuario1+(gente-1))->nombre, (usuario1+(gente-1))->apellido1, (usuario1+(gente-1))->apellido2);
	};
}