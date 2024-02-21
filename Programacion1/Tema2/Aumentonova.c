#include <stdio.h>

void main () {
	
	int salario, porcentaje = 0;
	
	printf("Calculadora de aumento de salarios\n");
	
	printf("Introduce un salario inicial: \n");
	scanf("%d", &salario);
	
	printf("Ahora introduce el porcentaje de aumento: \n");
	scanf("%d", &porcentaje);
	
	if (porcentaje < 0) {
		printf("Error");
		return;
	}
	
	salario *= (1 + porcentaje) / 100;
	printf("El salario nuevo es %d", salario);
	
}			// Salario = Salario + Salario * Porcentaje
			// Salario = Salario * (1 + porcentaje)
			// Salario *= 1 + Porcentaje