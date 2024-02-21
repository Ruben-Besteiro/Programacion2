#include <stdio.h>

int operacion (int base, int exponente);

void main () {
	int base = 0, exponente = 0, resultado = 0;
	
	printf("Introduce la base y el exponente de una funcion exponencial: ");
	scanf("%d %d", &base, &exponente);
	
	resultado = operacion (base, exponente);
	
	for (int i = 0; i <= exponente; i++) {
		printf("%d ^ %d = %d\n", base, i, operacion (base, i));
	}
}

int operacion (int base, int exponente) {
	int resultado = 0;
	
	if (exponente == 0) {
		resultado = 1;
	} else {
		resultado = base * operacion (base, exponente - 1);
	}
	return (resultado);
}