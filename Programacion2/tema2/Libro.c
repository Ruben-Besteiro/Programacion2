#include <stdio.h>

struct autor;
struct libro;

typedef struct {
	char nombre[10];
	char apellido[10];
	char pais[10];
} autor;

struct libro {
	char nombre[20];
	char ISBN[13];
	int paginas;
	char editorial[20];
	autor *pautor;
};

void main() {
	autor autor;
	*pautor = autor;
	
	struct libro libros[3];
	goto a;
	
	for (int i = 0; i < 3; i++) {
		switch (i) {
			case 0: printf("---------- PRIMER LIBRO ----------\n");
			break;
			case 1: printf("---------- SEGUNDO LIBRO ----------\n");
			break;
			case 2: printf("---------- TERCER LIBRO ----------\n");
			break;
		}
		printf("Nombre: ");
		scanf("%s", &libros[i].nombre);
		while (getchar() != '\n');
		
		printf("ISBN: ");
		scanf("%s", &libros[i].ISBN);
		while (getchar() != '\n');
		
		printf("N. de paginas: ");
		scanf("%d", &libros[i].paginas);
		while (getchar() != '\n');
		
		printf("Editorial: ");
		scanf("%s", &libros[i].editorial);
		while (getchar() != '\n');
		
		a:
		printf("Nombre del autor: ");
		scanf("%s", libros[i].pautor->nombre);
		while (getchar() != '\n');
		
		printf("Apellido del autor: ");
		scanf("%s", &libros[i].pautor->apellido);
		while (getchar() != '\n');
		
		printf("Pais: ");
		scanf("%s", &libros[i].pautor->pais);
		while (getchar() != '\n');
	}
	
	for (int j = 0; j < 3; j++) {
		printf("Libro numero %d: Su nombre es %s, su ISBN es %s, tiene %d paginas y lo publico la editorial %s.\n", j+1, libros[j].nombre, libros[j].ISBN, libros[j].paginas, libros[j].editorial);
		printf("Su autor es %s %s y es de %s\n", libros[j].pautor->nombre, libros[j].pautor->apellido, libros[j].pautor->pais);
	}
	
	printf("Enhorabuena, no te ha dado ningún error :)");
}