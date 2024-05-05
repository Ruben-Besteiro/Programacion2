#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fichero = fopen("palabras.txt", "r");
    FILE *ordenado = fopen("palabras_ordenadas.txt", "w");

    if (fichero == NULL || ordenado == NULL) {
        printf("Error");
        exit(1);
    }

    char palabra[20];
    char *palabras[20];
    int num_palabras = 0;

    while (fscanf(fichero, "%s", palabra) != EOF && num_palabras < 20) {
        palabras[num_palabras] = malloc(20 * sizeof(char));
        copiar_palabra(palabras[num_palabras], palabra);
        num_palabras++;
    }

    ordenar_palabras(palabras, num_palabras);

    for (int i = 0; i < num_palabras; i++) {
        fprintf(ordenado, "%s\n", palabras[i]);
        free(palabras[i]);
	}

    fclose(fichero);
    fclose(ordenado);

    printf("Las palabras han sido ordenadas y guardadas en el archivo \"palabras_ordenadas.txt\".\n");
}

void copiar_palabra(char *dest, char *src) {
    while ((*dest++ = *src++) != '\0');
}

void ordenar_palabras(char **palabras, int num_palabras) {
    int i, j;
    char temp[20];
    for (i = 0; i < num_palabras - 1; i++) {
        for (j = i + 1; j < num_palabras; j++) {
            int k = 0;
            while (palabras[i][k] != '\0' && palabras[j][k] != '\0') {
                if (palabras[i][k] > palabras[j][k]) {
                    copiar_palabra(temp, palabras[i]);
                    copiar_palabra(palabras[i], palabras[j]);
                    copiar_palabra(palabras[j], temp);
                    break;
                } else if (palabras[i][k] < palabras[j][k]) {
                    break;
                }
                k++;
            }
            if (palabras[i][k] == '\0' && palabras[j][k] != '\0') {
                copiar_palabra(temp, palabras[i]);
                copiar_palabra(palabras[i], palabras[j]);
                copiar_palabra(palabras[j], temp);
            }
        }
    }
}