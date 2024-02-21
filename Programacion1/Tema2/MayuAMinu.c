// Programa que pasa una letra mayúscula a una minúscula

#include <stdio.h>

char mayu = 0;
char minu = 0;

void main() {
	printf("Introduce una letra mayuscula: ");
	scanf("%c", &mayu);
	
	if (mayu < 'A' || mayu > 'Z') {
		printf("Bien pifiada");
	} else {
		char minu = mayu + 32;
		printf("El numero ASCII de dicha letra es %d\n", mayu);
		printf("Y su version minuscula es %c", minu);
	}
}