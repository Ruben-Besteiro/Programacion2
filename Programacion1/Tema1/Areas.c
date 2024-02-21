#include <stdio.h>
#define pi 3.1415926

// Declaraciones globales
int poligono = 0;
float dimension = 0, area = 0, AreaCirculo (float dimension), AreaCuadrado (float dimension), AreaTriangulo (float dimension); // Cualquier variable que tenga otra entre paréntesis es interpretada por el programa como una función

// Función principal
void main() {
	printf("Escoge un poligono para calcular su area.\n'1' = circulo\n'2' = cuadrado\n'3' = triangulo\n");
	scanf("%d", &poligono);
	
	if (poligono == 1) {
		printf("Ahora elige el radio\n");
	} else if (poligono == 2 || poligono == 3) {
		printf("Ahora elige el lado\n");
	} else {
		printf("Error\n");
		return;
	}
	
	scanf("%f", &dimension);
	if (dimension < 0) {
		printf("Debes introducir un numero positivo.");
		return;
	} else {
		if (poligono == 1) {
			area = AreaCirculo (dimension);		// A la variable área se le asigna el resultado de la función AreaCirculo con el parámetro dimension. El paréntesis hace falta para que el programa sepa que es una función
			printf("El area de un circulo de radio %f es igual a %f.", dimension, area);
		} else if (poligono == 2) {
			area = AreaCuadrado (dimension);
			printf("El area de un cuadrado de lado %f es igual a %f.", dimension, area);
		} else if (poligono == 3) {
			area = AreaTriangulo (dimension);
			printf("El area de un triangulo de lado %f es igual a %f.", dimension, area);
		}
	}
}

// Codificación de funciones
float AreaCirculo (float dimension) {
	area = pi * dimension * dimension;
	return (area);		// Devuelve la ejecución a la vez que la variable area fue mencionada (creo). De lo contrario, el programa devuelve la ejecución al sitio donde la dejó (al final de la línea 28) y la asignación no ocurre
}						// Tener poligono entre parentesis lo que hace es asignar el valor de poligono a area

float AreaCuadrado (float dimension) {
	area = dimension * dimension;
	return (area);
}

float AreaTriangulo (float dimension) {
	area = dimension * dimension * .433;
	return (area);
}