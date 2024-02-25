#include <stdio.h>

typedef struct {
	int campo1;
	char campo2;
} estructura;			// Las variables de tipo estructura se van a definir con este nombre

int fin = 0;

void main() {
	estructura *e1;
	estructura *e2;
	
	estructura x;
	estructura y;
	e1 = &x;
	e2 = &y;
	
	e1->campo1 = 0;
	e2->campo1 = 1;
	e1->campo2 = 'a';
	e2->campo2 = 'b';
	
	prints:
	printf("El numero de la primera estructura es %d\n", e1->campo1);
	printf("El numero de la segunda estructura es %d\n", e2->campo1);
	printf("El caracter de la primera estructura es %c\n", e1->campo2);
	printf("El caracter de la segunda estructura es %c\n", e2->campo2);
	
	printf("Ahora introduce 2 numeros y 2 caracteres para modificar las estructuras: ");
	scanf("%d %d %c %c", &e1->campo1, &e2->campo1, &e1->campo2, &e2->campo2);
	
	if (fin == 0) {
		fin++;
		goto prints;
	}
}