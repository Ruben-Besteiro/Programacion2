#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char *cadena;
	char puntero;
	cadena = &puntero;
	
	char *nombre;
	char *apellido;
	char *edad;
	
	scanf("%s", cadena);
	char *token;
	token = strtok(cadena, ",");
	nombre = (char *) malloc(strlen(token)+1);
	strcpy(nombre, token);
	
	token = strtok(NULL, ",");
	apellido = (char *) malloc(strlen(token)+1);
	strcpy(apellido, token);
	
	token = strtok(NULL, ",");
	*edad = atoi(token);
	
	printf("%s %s %d", nombre, apellido, edad);
}