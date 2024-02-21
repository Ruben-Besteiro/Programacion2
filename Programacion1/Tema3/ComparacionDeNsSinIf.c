// Comparación de números que se les piden al usuario sin usar if / else
	
#include <stdio.h>

int n1, n2, res = 0;

void main() {
	printf("Introduce 2 numeros enteros separados por una coma\n");
	printf("Si son iguales, saldra 1\n");
	printf("De lo contrario, saldra 0\n");
	scanf("%d, %d", &n1, &n2);
	
	res = (n1 == n2);
	printf("%d", res);
}