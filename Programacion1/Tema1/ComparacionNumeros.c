/* Programa de comparación de 3 numeros */
#include <stdio.h>

void main () {
	int n1;
	int n2;
	int n3;
	
	printf("Introduce tres numeros enteros\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf("El primer numero es el mayor\n");
	} else if (n2 > n1 && n2 > n3) {
		printf("El segundo numero es el mayor\n");
	} else if (n3 > n1 && n3 > n2) {
		printf("El tercer numero es el mayor\n");
	} else if (n1 == n2 && n1 > n3) {
		printf("El primer y el segundo numero son los mayores\n");
	} else if (n1 == n3 && n1 > n2) {
		printf("El primer y el tercer numero son los mayores\n");
	} else if (n2 == n3 && n2 > n1) {
		printf("El segundo y el tercer numero son los mayores\n");
	} else {
		printf("Los tres numeros son iguales\n");
	}
}