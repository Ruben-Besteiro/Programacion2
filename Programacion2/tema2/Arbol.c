#include <stdio.h>

typedef long long int Int64;
typedef int Int32;
typedef short Int16;
typedef char Byte;
typedef enum {pino,haya,roble,eucalipto} TipoArbol_e; 

typedef struct {
    Int64 numeroHojas;
    Int32 numeroRamas;
    Int16 numeroRaices;
    Byte nombreArbol[10];
	TipoArbol_e especieArbol;
} arbol_t;

arbol_t crearArbol();
void mostrarArbol(arbol_t nuevoArbol, Int32 i);


arbol_t crearArbol(Int32 i) {		// struct crearArbol()
    arbol_t nuevoArbol;		// struct nuevoArbol
	
	printf("\nArbol %d\n", i+1);

    printf("Introduce el numero de hojas: ");
    scanf("%lld", &nuevoArbol.numeroHojas);

    printf("Introduce el numero de ramas: ");
    scanf("%d", &nuevoArbol.numeroRamas);

    printf("Introduce el numero de raices: ");
    scanf("%hd", &nuevoArbol.numeroRaices);

    printf("Introduce el nombre del arbol (hasta 10 caracteres): ");
    scanf("%s", nuevoArbol.nombreArbol);
	
	printf("Introduce la especie del arbol (0 = pino, 1 = haya, 2 = roble, 3 = eucalipto): ");
	scanf("%d", &nuevoArbol.especieArbol);

    return nuevoArbol;
}

void mostrarArbol(arbol_t nuevoArbol, Int32 i) {
	printf("\nArbol %d\n", i+1);
	
    printf("\nNumero de hojas: %lld\n", nuevoArbol.numeroHojas);
    printf("Numero de ramas: %d\n", nuevoArbol.numeroRamas);
    printf("Numero de raices: %hd\n", nuevoArbol.numeroRaices);
    printf("Nombre del arbol: %s\n", nuevoArbol.nombreArbol);
	printf("Especie del arbol: ");
	switch ((int)nuevoArbol.especieArbol) {
		case 0: printf("pino");
		break;
		case 1: printf("haya");
		break;
		case 2: printf("roble");
		break;
		case 3: printf("eucalipto");
		break;
	}
	printf("\n");
}

void main() {
    arbol_t miArbol[9];
    Int32 opcion, cantidadArboles = 0;
	Int32 arbolesQueCompartenEspecie;

    do {
		if (cantidadArboles == 0) {
			printf("\nElige cuantos arboles quieres crear (1-9): ");
			scanf("%d", &cantidadArboles);
		}
		
        printf("\nSeleccione una opcion:\n");
        printf("1. Crear arbol\n");
        printf("2. Mostrar todos los arboles\n");
		printf("3. Mostrar los arboles de una especie en concreto\n");
        printf("4. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
				for (Int32 i = 0; i < cantidadArboles; i++) {
					miArbol[i] = crearArbol(i);			// Crea una estructura llamada miArbol que será el resultado de la función crearArbol()
				}
                break;
            case 2:
				for (Int32 i = 0; i < cantidadArboles; i++) {
					mostrarArbol(miArbol[i], i);			// Utiliza la estructura miArbol para la funcion mostrarArbol
				}
                break;
			case 3:
				Int32 especie;
				printf("\nIntroduce una especie (0 = pino, 1 = haya, 2 = roble, 3 = eucalipto): ");
				scanf("%d", &especie);
				
				printf("Has escogido: ");
				switch (especie) {
					case 0: printf("pino");
					break;
					case 1: printf("haya");
					break;
					case 2: printf("roble");
					break;
					case 3: printf("eucalipto");
					break;
				}
				printf("\n");
				
				for (Int32 i = 0; i < cantidadArboles; i++) {
					if (miArbol[i].especieArbol == especie) {
						mostrarArbol(miArbol[i], i);
					}
				}
				break;
            case 4:
                printf("Gracias por utilizar el programa de gestion de arboles\n");
                break;
            default:
                printf("Eres tonto\n");
		}
		
    } while (opcion != 3);
}