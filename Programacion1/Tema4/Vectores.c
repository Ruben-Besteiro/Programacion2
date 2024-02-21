#include <stdio.h>

void main() {
	float x1 = 0, y1 = 0, x2 = 0, y2 = 0, divx = 0, divy = 0, dif = 0;
	
	printf("Introduce las coordenadas x e y de 2 vectores (separados por |): ");
	scanf("%f %f | %f %f", &x1, &y1, &x2, &y2);
	
	divx = x1 / x2;
	divy = y1 / y2;
	dif = divx - divy;
	
	if (dif < .1 && dif > -.1) {
		printf("Los vectores son similares.");
	} else {
		printf("Los vectores no son similares.");
	}
}