#include <stdio.h>

void main() {
	int ip = 0;
	printf("Introduce una direccion IP en formato octal sin los puntos: ");
	scanf("%o", &ip);
	
	if (ip < 0) {
		printf("Esa no es una direccion valida");
		return;
	} else {
		printf("La direccion que has introducido es %d en formato decimal", ip);
	}
}