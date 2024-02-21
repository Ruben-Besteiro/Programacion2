#include <stdio.h>
int main () {
	int numero = 0;
	int factorial = 1 ;
	
	do {		// Esto se ejecuta primero
		printf ("Introduce un numero entero positivo: ");
		scanf ("%d",&numero);
		} while (numero <= 0);		// Si el usuario da un número negativo, vuelve a la línea del do
		
		
		for (int i = 1; i < numero+1; i++ ) {		// Por otra parte, si el usuario da un número positivo, la ejecución continúa
			factorial = factorial * i;
			}
			printf ("El factorial de %d es: %d \n", numero, factorial);
		
			return 0;
	}