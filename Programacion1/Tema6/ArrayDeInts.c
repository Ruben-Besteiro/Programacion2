#include <stdio.h>

void main() {

char numeros[20] = "123456789";				// Este método de inicializar arrays solo vale para strings

	for (int i = 0; i < 20; i++) {
		if (numeros[i] != '\0') {
			printf("%d", numeros[i]);
		} else {
			printf("0");
		}
	}
}