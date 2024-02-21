#include <stdio.h>

void main () {
	
	int n = 0, resultado = 1, i = 1;
	
	printf("Introduce un numero: ");
	scanf("%d", &n);
	
	/*for (int i = 2; i < n; i++) {
		resultado *= i;
	}*/
	
	while (i <= n) {
		resultado *= i;
		i++;
	}
	
	printf("El factorial de %d es %d", n, resultado);
}