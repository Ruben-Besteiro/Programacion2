/*#include <stdio.h>

struct arbol {
	long long int numeroHojas;
	int numeroRamas;
	short numeroRaices;
	char nombre[10];
} arbol1, arbol2;

arbol1 introduceDetalles(arbol);
void presentarArbol();


void main() {
	//struct arbol arbol1;		// Declarando la misma estructura con 2 nombres distintos
	struct arbol arbol2;		// Es como si se duplicase
	
	struct arbol arbol1;
	
	arbol1.numeroHojas = 0;
	printf("El numero de hojas del primer arbol es %lld", arbol1.numeroHojas);
	
	introduceDetalles();
}

arbol1 introduceDetalles() {
	printf("El numero de hojas del primer arbol es %lld", arbol1.numeroHojas);
}*/


#include <stdio.h>

typedef long long int Int64;
typedef int Int32;
typedef short Int16;
typedef char Byte;

typedef struct {
    Int64 numeroHojas;
    Int32 numeroRamas;
    Int16 numeroRaices;
    Byte nombreArbol[10];
} arbol_t;

arbol_t crearArbol() {
    arbol_t nuevoArbol;

    printf("Ingrese el número de hojas: ");
    scanf("%lld", &nuevoArbol.numeroHojas);

    printf("Ingrese el número de ramas: ");
    scanf("%d", &nuevoArbol.numeroRamas);

    printf("Ingrese el número de raíces: ");
    scanf("%hd", &nuevoArbol.numeroRaices);

    printf("Ingrese el nombre del árbol (hasta 10 caracteres): ");
    scanf("%s", nuevoArbol.nombreArbol);

    return nuevoArbol;
}

void mostrarArbol(arbol_t arbol) {
    printf("\nNúmero de hojas: %lld\n", arbol.numeroHojas);
    printf("Número de ramas: %d\n", arbol.numeroRamas);
    printf("Número de raíces: %hd\n", arbol.numeroRaices);
    printf("Nombre del árbol: %s\n", arbol.nombreArbol);
}

int main() {
    arbol_t miArbol;
    int opcion;

    do {
        printf("\nMenú:\n");
        printf("1. Crear arbol\n");
        printf("2. Mostrar arbol\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                miArbol = crearArbol();
                break;
            case 2:
                mostrarArbol(miArbol);
                break;
            case 3:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}
