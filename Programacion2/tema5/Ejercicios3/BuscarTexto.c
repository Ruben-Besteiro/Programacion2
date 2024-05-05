#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para almacenar la información de las palabras
typedef struct {
    char *palabra;
    int num_ocurrencias;
    int *lineas;
    int num_lineas;
} palabraInfo_t;

// Estructura para almacenar la lista de información de palabras
typedef struct {
    palabraInfo_t *palabras;
    int num_palabras;
} listaPalabras_t;

void examinaLinea(char *linea, int num_linea, listaPalabras_t *listaPalabras);
char *leeLineaDinamicaFile(FILE *fd);
void escribirResultado(listaPalabras_t lista, char *nombreFichOrigen);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Uso: %s <Nombre de fichero> <Palabras a buscar>\n", argv[0]);
        return 1;
    }

    FILE *archivo;
    archivo = fopen(argv[1], "r");
    if (archivo == NULL) {
        fprintf(stderr, "Error: No se pudo abrir el fichero de entrada %s\n", argv[1]);
        return 1;
    }

    listaPalabras_t listaPalabras = {NULL, 0};
    char *linea;
    int num_linea = 1;

    // Leer el fichero línea por línea y examinar cada línea
    while (!feof(archivo)) {
		linea = leeLineaDinamicaFile(archivo);
		printf("%s", linea);
        examinaLinea(linea, num_linea, &listaPalabras);
        //free(linea);
        num_linea++;
    }

    // Cerrar el fichero de entrada
    fclose(archivo);

    // Escribir el resultado en el fichero de salida
    escribirResultado(listaPalabras, argv[1]);

    // Liberar memoria
    int i;
    for (i = 0; i < listaPalabras.num_palabras; i++) {
        free(listaPalabras.palabras[i].palabra);
        free(listaPalabras.palabras[i].lineas);
    }
    free(listaPalabras.palabras);

    return 0;
}

// Función para examinar una línea y actualizar la lista de palabras
void examinaLinea(char *linea, int num_linea, listaPalabras_t *listaPalabras) {
    char *token;
    const char delimitador[] = " \t\r\n"; // Delimitadores: espacio, tabulador, retorno de carro, nueva línea

    // Tokenizamos la línea para obtener cada palabra
    token = strtok(linea, delimitador);
    while (token != NULL) {
        // Buscamos si la palabra ya está en la lista
        int i;
        for (i = 0; i < listaPalabras->num_palabras; i++) {
            if (strcmp(listaPalabras->palabras[i].palabra, token) == 0) {
                // La palabra ya existe, actualizamos la información
                listaPalabras->palabras[i].num_ocurrencias++;
                listaPalabras->palabras[i].lineas = realloc(listaPalabras->palabras[i].lineas, (listaPalabras->palabras[i].num_lineas + 1) * sizeof(int));
                listaPalabras->palabras[i].lineas[listaPalabras->palabras[i].num_lineas] = num_linea;
                listaPalabras->palabras[i].num_lineas++;
                break;
            }
        }
        if (i == listaPalabras->num_palabras) {
            // La palabra no está en la lista, la añadimos
            listaPalabras->num_palabras++;
            listaPalabras->palabras = realloc(listaPalabras->palabras, listaPalabras->num_palabras * sizeof(palabraInfo_t));
            listaPalabras->palabras[i].palabra = strdup(token);
            listaPalabras->palabras[i].num_ocurrencias = 1;
            listaPalabras->palabras[i].lineas = malloc(sizeof(int));
            listaPalabras->palabras[i].lineas[0] = num_linea;
            listaPalabras->palabras[i].num_lineas = 1;
        }
        token = strtok(NULL, delimitador);
    }
}

// Función para leer una línea de un fichero
char *leeLineaDinamicaFile(FILE *fd) {
    char *linea = NULL;
	char direccion;
	linea = &direccion;
    int longitud = 0;
    int leidos;
    //leidos = getline(&linea, &longitud, fd);
	leidos = fgets(linea, longitud, fd);
	printf("%d", leidos);
    if (leidos == -1) {
        free(linea);
        return NULL;
    }
    // Eliminar el caracter de nueva línea si existe
    if (linea[leidos - 1] == '\n') {
        linea[leidos - 1] = '\0';
    }
	printf("XD");
    return linea;
}

// Función para escribir el resultado en un fichero
void escribirResultado(listaPalabras_t lista, char *nombreFichOrigen) {
    FILE *archivo2;
    char *nombreFichSalida;
    int i, j;

    // Generar el nombre del fichero de salida
    nombreFichSalida = malloc(strlen(nombreFichOrigen) + 5); // ".out" + terminador
    strcpy(nombreFichSalida, nombreFichOrigen);
    char *punto = strrchr(nombreFichSalida, '.');
    if (punto == NULL) {
        strcat(nombreFichSalida, ".out");
    } else {
        strcpy(punto, ".out");
    }

    // Abrir el fichero de salida
    archivo2 = fopen(nombreFichSalida, "w");
    if (archivo2 == NULL) {
        fprintf(stderr, "Error: No se pudo abrir el fichero de salida %s\n", nombreFichSalida);
        free(nombreFichSalida);
        return;
    }

    // Escribir el resultado en el fichero
    for (i = 0; i < lista.num_palabras; i++) {
        fprintf(archivo2, "Palabra: %s\n", lista.palabras[i].palabra);
        fprintf(archivo2, "Número de ocurrencias: %d\n", lista.palabras[i].num_ocurrencias);
        fprintf(archivo2, "Líneas:");
        for (j = 0; j < lista.palabras[i].num_lineas; j++) {
            fprintf(archivo2, " %d", lista.palabras[i].lineas[j]);
        }
        fprintf(archivo2, "\n\n");
    }

    // Cerrar el fichero de salida y liberar memoria
    fclose(archivo2);
    free(nombreFichSalida);
}