#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *archivo1, *archivo2;
    int matriz[10][10];
    int filas, columnas;
    int sumaFila[10] = {0};
    archivo1 = fopen("matriz.txt", "r");
    if (archivo1 == NULL) {
        printf("Error al abrir el archivo de entrada.\n");
        return 1;
    }

    fscanf(archivo1, "%d %d", &filas, &columnas);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fscanf(archivo1, "%d", &matriz[i][j]);
            sumaFila[i] += matriz[i][j];
        }
    }

    fclose(archivo1);

    archivo2 = fopen("resultados.txt", "w");
    if (archivo2 == NULL) {
        printf("Error al abrir el archivo de salida.\n");
        exit(1);
    }

    for (int i = 0; i < filas; i++) {
        fprintf(archivo2, "%d\n", sumaFila[i]);
    }

    fclose(archivo2);

    printf("Resultados guardados en \"resultados.txt\" exitosamente.\n");
}