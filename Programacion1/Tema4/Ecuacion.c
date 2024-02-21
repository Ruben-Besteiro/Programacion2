#include <stdio.h>
#include <math.h>

void main () {
	int a = 0, b = 0, c = 0;
	float x1 = 0, x2 = 0, disc = b * b - 4 * a * c;
	
	printf("Introduce los 3 coeficientes de una ecuacion de segundo grado: ");
	scanf("%d %d %d", &a, &b, &c);
	
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
	
	if (disc >= 0) {										// Si el discriminante NO es negativo, existe primera solución y pasa al otro if
		printf("La primera solucion es %f.\n", x1);
	} else {												// Si SÍ lo es, dice que no existe solución y pasa al segundo if
		printf("No existe solucion.");
		return;
	}
	
	if (disc > 0) {											// Si el discriminante es mayor que 0, existe segunda solución
		printf("La segunda solucion es %f.\n", x2);
	} else if (disc == 0) {									// Si es igual a 0, la solución es doble
		printf("No existe segunda solucion.");
	}
}

/* Se podría hacer con un if else if else

if (disc > 0) {
	printf("