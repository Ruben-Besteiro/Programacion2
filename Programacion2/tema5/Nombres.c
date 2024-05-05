#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *lld();
int ordenarNombresAlfabeticamente(char *a, char *b);

void main() {
    char *nombre = NULL;
    char **nombres = NULL;
    int numNombres = 0;
    int numero;

    do {
        printf("Pulsa 1 para meter un nombre\n");
		printf("Pulsa 2 para salir\n");
        scanf("%d", &numero);
        while (getchar() != '\n');

        switch (numero) {
            case 1: nombre = lld();
				nombres = (char **) realloc(nombres, (numNombres + 1)*sizeof(char *));
				nombres[numNombres] = nombre;
				numNombres++;
				for (int i = 0; i < numNombres - 1; i++) {
					for (int j = 0; j < numNombres - i - 1; j++) {
						if (ordenarNombresAlfabeticamente(nombres[j], nombres[j + 1]) > 0) {
							char *temp = nombres[j];
							nombres[j] = nombres[j + 1];
							nombres[j + 1] = temp;
						}
					}
				}
				printf("\nNombres ordenados:\n");
				for (int i = 0; i < numNombres; i++) {
					printf("%s\n", nombres[i]);
				}
				break;
            case 2:
                for (int i = 0; i < numNombres; i++) {
                    free(nombres[i]);
                }
                free(nombres);
				exit(0);
            default:
                printf("Eres tonto\n");
        }
    } while(numero != 2);
}

char *lld() {
    char *nombre = (char *)malloc(10);
    int i = 0;
    char leer;
    int bloque = 10;

    printf("Introduce un nombre: ");

    while ((leer = getchar()) != '\n') {
        nombre[i] = leer;
        i++;

        if (i == bloque) {
            bloque += 10;
            nombre = (char *)realloc(nombre, bloque);
        }
    }

    nombre[i] = '\0';
    return nombre;
}

int ordenarNombresAlfabeticamente(char *a, char *b) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) {
        i++;
    }

    return a[i] - b[i];
}