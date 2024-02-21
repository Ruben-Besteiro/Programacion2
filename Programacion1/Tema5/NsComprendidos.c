#include <stdio.h>

int n1 = 0, n2 = 0, suma = 0, xd = 0;
int funcionSuma (int n1, int n2, int suma);

void main () {
	printf("Introduce 2 numeros y el programa hara una suma de los numeros comprendidos entre ellos: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 > n2) {
		xd = n1;
		n1 = n2;
		n2 = xd;
	}
		
	suma = funcionSuma (n1, n2, suma);
	printf("La suma de los numeros comprendidos entre %d y %d es %d", n1, n2, suma);
}

int funcionSuma (int n1, int n2, int suma) {
	for (int i = n1; i <= n2; i++) {
		suma += i;
	}
	
	/* while (i <= n2) {
		suma += i
		i++
	} */
		
	return(suma);
}