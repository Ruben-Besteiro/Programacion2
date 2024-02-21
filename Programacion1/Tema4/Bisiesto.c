#include <stdio.h>

void main() {
int anio = 0;

	printf("Introduce un anio y el ordenador calculara si es bisiesto o no: ");
	scanf("%d", &anio);

	if (anio % 4 == 0 && anio % 100 != 0) {
		printf("Es bisiesto.");
	} else if (anio % 400 == 0) {
		printf("Es bisiesto.");
	} else {
		printf("No es bisiesto.");
	}
}