#include <stdio.h>
#define pi 3.1415926

// Declaraciones globales de variables. No poner ningún = hace que sean = 0
float AreaCirculo (float radio), radio, resultado, area; // Declara la función para luego definirla más abajo. Primero va el valor que la función devuelve y entre () el que usa
float radio;
float resultado;
float area;

// Función main
void main (int argc, char **argv) {		// wtf?
	printf("Introduce el radio de un circulo y se calculara su area: ");
	scanf("%f", &radio);
	area = AreaCirculo (radio); {		// Invoca la función AreaCirculo con el valor radio
		printf("El area de un circulo de radio %f es %f", radio, area);
	}
}

// Codificación de funciones
float AreaCirculo (float radio) {
	area = pi * radio * radio;
	return (area);
}