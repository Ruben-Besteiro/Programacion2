#include <stdio.h>

int main() {
	
	int entero, scan = 0;
	float numero = 0;
	printf("Introduce cualquier cosa y el ordenador vera si lo que has metido es un entero: ");
	scanf("%f", &numero);
	entero = numero;							// Hace que el int sea igualado al float pero truncado, para luego compararlos
	scan = scanf("%d", &entero);				// Comprueba que esto es un número
	
	if (numero - entero == 0 && scan == 1) {
		printf("Lo que has introducido es un entero");
	} else {
		printf("Lo que has introducido no es un entero");
	}
	
	return 0;
}