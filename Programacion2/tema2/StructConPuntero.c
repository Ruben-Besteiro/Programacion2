#include <stdio.h>

typedef struct {
	int *entero;
} numero;

void main() {
	numero numero;
	
	scanf("%d", &(numero.entero));
	printf("%d", *(numero.entero));
}