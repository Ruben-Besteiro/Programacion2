#include <stdio.h>

void main () {
	int n1 = 0, n2 = 0, temp = 0, mcd = 0;
	
	printf("Introduce dos enteros: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 < n2) {				// Si los números se introducen en el orden opuesto, el programa los cambia de sitio
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("%d %d %d", n1, n2, resto);		// Esto es para depurar
	
	while (n1 % n2 != 0) {
		cociente = n2 / (n1 % n2);
		printf("%d", cociente);
	}
	mcd = cociente;
}			// Pifiada