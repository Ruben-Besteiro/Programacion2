#include <stdio.h>

void main() {
	int *puntero;
	int direccion = 0;
	puntero = &direccion;
	
	printf("En la direccion de memoria hay un %d\n", *puntero);
	funcion (&puntero);
	printf("Ahora hay un %d", *puntero);
}

void funcion (int *puntero) {
	*puntero = *puntero + 1;
}

/*#include <stdio.h>
#include <math.h>


void elevar_al_cubo(double *n)
{
    *n = pow(*n, 3);
}

int main(int argc, char const *argv[])
{
    double n = 5;
    printf("%0.f elevado a 3 es ", n);
    elevar_al_cubo(&n);
    printf("%0.f.\n", n);
    return 0;
}*/