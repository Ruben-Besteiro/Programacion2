#include <stdio.h>

void main() {
	int numero1 = 0, numero2 = 0, factor1 = 0, factor2 = 0, factor3 = 0, producto1 = 0, producto2 = 0, producto3 = 0, productofinal = 0;
	
	printf("Introduce 2 numeros enteros de 3 cifras: ");
	scanf("%d %d", &numero1, &numero2);
	
	if (numero1 < 100 || numero2 < 100 || numero1 > 999 || numero2 > 999) {
		printf("Error");
		return;
	}
	
	factor1 = numero2 % 10;
	producto1 = numero1 * factor1;
	printf("%d * %d = %d\n", numero1, factor1, producto1);
	
	factor2 = (numero2 / 10) % 10;
	producto2 = numero1 * factor2 * 10;
	printf("%d * %d * 10 = %d\n", numero1, factor2, producto2);
	
	factor3 = numero2 / 100;
	producto3 = numero1 * factor3 * 100;
	printf("%d * %d * 100 = %d\n", numero1, factor3, producto3);
	
	productofinal = producto1 + producto2 + producto3;
	printf("%d + %d + %d = %d", producto1, producto2, producto3, productofinal);
	
}