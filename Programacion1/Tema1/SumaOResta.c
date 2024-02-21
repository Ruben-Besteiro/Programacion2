/* Programa de suma o resta */
#include <stdio.h>

void main() {
	int n1;
	int n2;
	int n3;
	
	printf("Introduce dos numeros enteros \nSi el primero es mayor que el segundo, se restaran \nDe lo contrario, se sumaran\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	if (n1 > n2) {
		printf("El primer numero es mayor que el segundo, por lo tanto se hara la resta\n");
		n3 = n1 - n2;
		printf("%d - %d = %d", n1, n2, n3);
	}
	else {
		printf("El primer numero no es mayor que el segundo, por lo tanto se hara la suma\n");
		n3 = n1 + n2;
		printf("%d + %d = %d", n1, n2, n3);
	}
}