/*#define XD 8
#include <stdio.h>

void main() {
	
	for (int i = 0; i < XD; i++) {
		printf("i = %d\n", i);
	}
}*/
#include <stdio.h>

void main() {
    int numero = 0, i = 0, factorial = 1;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Comprobamos si el número es negativo
    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        for (i = 1; i <= numero; i++) {			// Ejecutar lo que hay dentro del for hasta que i sea mayor que numero
            factorial *= i;
        }
        printf("El factorial de %d es %d\n", numero, factorial);
    }
}