#include <stdio.h>

typedef long long int int64;
typedef int int32;
typedef short int16;
typedef char byte;

typedef struct arbol {
	int64 numeroHojas;
	int32 numeroRamas;
	int16 numeroRaices;
	byte nombreArbol[10]/* = {'A', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}*/;
} arbol_XD;

arbol_XD crearArbol(arbol_XD);
void mostrarArbol(arbol_XD);


void main() {
	arbol_XD arbol_XD;
	int16 numero;

	
	do {
		printf("Selecciona una opcion\n");
		printf("1: Crea un arbol\n");
		printf("2: Muestra dicho arbol\n");
		printf("3: Sal del programa\n");
	
		scanf("%d", &numero);
		while(getchar() != '\n');
		
		switch (numero) {
			case 1: crearArbol(arbol_XD);		// Como hemos sustituido struct por arbol_XD, esta función devuelve un struct
			break;
			case 2: mostrarArbol(arbol_XD);
			break;
			case 3: return;
			break;
			default: printf("Error\n");
			break;
		}
	} while (numero != 3);
}

arbol_XD crearArbol(arbol_XD) {
	arbol_XD arbol_XD;			// Es necesario hacer esto al inicio de cada función, si no el compilador va a lloriquear
	
	printf("Introduce el numero de hojas: ");
	scanf("%d", &arbol_XD.numeroHojas);
	printf("Introduce el numero de ramas: ");
	scanf("%d", &arbol_XD.numeroRamas);
	printf("Introduce el numero de raices: ");
	scanf("%d", &arbol_XD.numeroRaices);
	printf("Introduce el nombre del arbol: ");
	scanf("%s", arbol_XD.nombreArbol);
	
	return arbol_XD;
}

void mostrarArbol(arbol_XD) {
	arbol_XD arbol_XD;
	
	printf("El numero de hojas es %d\n", arbol_XD.numeroHojas);
	printf("El numero de ramas es %d\n", arbol_XD.numeroHojas);
	printf("El numero de raices es %d\n", arbol_XD.numeroHojas);
	printf("El nombre del arbol es ");
	for (int32 i = 0; i < 10; i++) {
		printf("%c", arbol_XD.nombreArbol[i]);
	}
	printf("\n");
}