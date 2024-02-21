#include <stdio.h>

void main () {
	
	float base, altura, area = 0;
	
	printf("Introduce la base y la altura de un triangulo (separadas por coma) para calcular su area: ");
	scanf("%f, %f", &base, &altura);
	
	if (base < 0 || altura < 0) {
		printf("Error");
		return;
	}
	
	area = base * altura / 2;
	printf("El area del triangulo es %f", area);
	
}