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

arbol_t crearArbol();					// Prototipos añadidos por mí
void mostrarArbol(arbol_t arbol);


arbol_t crearArbol() {		// struct crearArbol()
    arbol_t nuevoArbol;		// struct nuevoArbol

    printf("Introduce el número de hojas: ");
    scanf("%lld", &nuevoArbol.numeroHojas);

    printf("Introduce el número de ramas: ");
    scanf("%d", &nuevoArbol.numeroRamas);

    printf("Introduce el número de raíces: ");
    scanf("%hd", &nuevoArbol.numeroRaices);

    printf("Introduce el nombre del árbol (hasta 10 caracteres): ");
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
        printf("\nSeleccione una opción:\n");
        printf("1. Crear arbol\n");
        printf("2. Mostrar arbol\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                miArbol = crearArbol();			// Crea una estructura llamada miArbol que será el resultado de la función crearArbol()
                break;
            case 2:
                mostrarArbol(miArbol);			// Utiliza la estructura miArbol para la funcion mostrarArbol
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
