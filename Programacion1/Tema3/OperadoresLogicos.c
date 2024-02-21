#include <stdio.h>

void main() {
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0;
	int cond1 = 0, cond2 = 0, cond3 = 0, cond4 = 0;
	
	printf("Introduce 4 numeros decimales: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	cond1 = (n1 > n2 && n1 > n3);
	cond2 = (n3 * n3 < n2 * n4 || n3 * 2 < n2);
	cond3 = ((int)n1 % (int)n4 > n3 && n1 > n4);		// lo de poner (int) antes de los floats n1 y n4 hace que el compilador los lea como si fuesen ints
	cond4 = (n2 / n4 == n1);
	

	printf("El primer numero es mayor que el segundo y que el tercero: %d\n", cond1);
	printf("El tercer numero ^ 2 es menor que el segundo por el cuarto o el tercero * 2 es menor que el segundo: %d\n", cond2);
	printf("El modulo del primero y el cuarto es mayor que el tercero y el primero es mayor que el cuarto: %d\n", cond3);
	printf("La division entre el segundo y el cuarto es igual al primero: %d", cond4);
}