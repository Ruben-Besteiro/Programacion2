/* Programa de comparación de 3 números */
#include <stdio.h>

void main () {
	int n1;
	int n2;
	int n3;
	
	printf("Introduce tres números enteros");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf("El primer número es el mayor");
	} else if (n2 > n1 && n2 > n3) {
		printf("El segundo número es el mayor");
	} else if (n3 > n1 && n3 > n2) {
		printf("El tercer número es el mayor");
	} else if (n1 == n2 && n1 > n3) {
		printf("El primer y el segundo número son los mayores");
	} else if (n1 == n3 && n1 > n2) {
		printf("El primer y el tercer número son los mayores");
	} else if (n2 == n3 && n2 > n1) {
		printf("El segundo y el tercer número son los mayores");
	} else {
		printf("Los tres números son iguales");
	}
}