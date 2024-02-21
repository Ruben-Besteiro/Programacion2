#include <stdio.h>
#include <stdlib.h>

struct datos_t {
	int edad;
	float peso;
	char nombre[10];
};

union datos_u {
	int edad;
	float peso;
	char nombre[10];
};

void main() {
	struct datos_t datos_t;
	union datos_u datos_u;
	
	datos_t.edad = 69, datos_u.edad = 69, datos_t.peso = 69, datos_u.peso = 69;
	
	printf("Edad y peso T: %d %f\n", datos_t.edad, datos_t.peso);
	printf("Edad y peso U: %d", datos_u.edad);
	printf(" %f", datos_u.peso);			// Aunque se acceda a las 2 cosas de la unión no a la vez, sigue dando error
}
