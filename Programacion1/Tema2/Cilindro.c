// Área de la base de un cilindro y su volumen

#include <stdio.h>
#define pi 3.1415926

float radio = 0, area = 0, AreaCirculo (float radio);
double altura = 0, volumen = 0, VolumenCilindro (float area);


void main() {
	
	printf("Introduce el radio de la base del cilindro: ");
	scanf("%f",  &radio);
	
	if (radio < 0) {
		printf("Bien pifiada");
		return;
	}
	
	printf("Ahora introduce la altura del cilindro: ");
	scanf("%lf", &altura);
	
	if (altura < 0) {
		printf("Bien pifiada");
		return;
	}
	
	area = AreaCirculo (radio);
	printf("El area de la base del cilindro es %f\n", area);
	
	volumen = VolumenCilindro (area);
	printf("Y su volumen es %lf", volumen);
	
}

float AreaCirculo (float radio) {
	area = pi * radio * radio;
	return area;
}

double VolumenCilindro (float area) {
	volumen = area * altura;
	return volumen;
}