#include <stdio.h>

void main() {
	int año = 0;
	
	printf("Introduce un ano y el ordenador calculara si es bisiesto: ");
	scanf("%d", &año);
	
	if (año % 4 == 0 && año % 100 != 0) {
		printf("Lo es");
	} else if (año % 400 == 0) {
		printf("Lo es");
	} else {
		printf("No lo es");
	}
}