#include <stdio.h>

void main() {
	float ancho, largo, area = 0;
	
	printf("Introduce el ancho y largo de un rectangulo (separados por una coma) para calcular su area: ");
	scanf("%f, %f", &ancho, &largo);
	
	area = ancho * largo;
	printf("El area del rectangulo es igual a %.2f", area);
}