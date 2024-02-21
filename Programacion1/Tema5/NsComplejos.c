#include <stdio.h>

int SumaR (int r1, int r2);
int SumaI (int i1, int i2);
int RestaR (int r1, int r2);
int RestaI (int i1, int i2);
int MultiR (int r1, int r2);
int MultiI (int i1, int i2);


void main () {
	int r1 = 0, r2 = 0, i1 = 0, i2 = 0, operacion = 0, r3 = 0, i3 = 0;
	
	printf("Introduce la parte real y la imaginaria del primer numero: ");
	scanf("%d %d", &r1, &i1);
	printf("Ahora introduce la parte real y la imaginaria del segundo numero: ");
	scanf("%d %d", &r2, &i2);
	
	printf("Escoge una operacion:\n");			// Se le pregunta al usuario que qué operacion escoge
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	scanf("%d", &operacion);
	
	switch (operacion) {						// Según lo que se escoja se invoca un par de funciones u otro
		case 1: r3 = SumaR (r1, r2);
			i3 = SumaI (i1, i2);
			printf("Suma = %d + %di", r3, i3);
			break;
		case 2:	r3 = RestaR (r1, r2);
			i3 = RestaI (i1, i2);
			printf("Resta = %d - %d i", r3, i3);
			break;
		case 3: r3 = MultiR (r1, r2);
			i3 = MultiI (i1, i2);
			printf("Multiplicacion = %d * %d i", r3, i3);
			break;
		default: printf("Error");
			break;
		}
}
			
// Si se escoge suma:
			
int SumaR (int r1, int r2) {
	int r3 = r1 + r2;
	return (r3);
}

int SumaI (int i1, int i2) {
	int i3 = i1 + i2;
	return (i3);
}

// Si se escoge resta:

int RestaR (int r1, int r2) {
	int r3 = r1 - r2;
	return (r3);
}

int RestaI (int i1, int i2) {
	int i3 = i1 - i2;
	return (i3);
}

// Si se escoge multi:

int MultiR (int r1, int r2) {
	int r3 = r1 * r2;
	return (r3);
}

int MultiI (int i1, int i2) {
	int i3 = i1 * i2;
	return (i3);
}