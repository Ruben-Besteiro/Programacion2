#include <stdio.h>

int ComprobarNumero (int numeros);
int EsMayuscula (char letra);

void main() {
	int numeros = 0;
	char letra = 0;
	
	numeros = ComprobarNumero (numeros);
	
	letra = EsMayuscula (letra);
	
	printf("Tu DNI es %d-%c", numeros, letra);					// Esto no funciona, pero lo haría si hubiese usado punteros
}

int ComprobarNumero (int numeros) {
	int comprobacion = 0;
	printf("Introduce los numeros de tu DNI: ");
	
	while (numeros < 10000000 || numeros > 99999999 || comprobacion != 1) {			// Las condiciones del while son que el número sea de 8 dígitos y que el usuario no introduzca una letra
		comprobacion = scanf("%d", &numeros);
		while (getchar() != '\n');
		
		if (comprobacion != 1) {													// Mensaje de error si el usuario mete una letra
			printf("No se ha introducido un numero. Vuelve a intentarlo: ");
		}
		
		if (comprobacion == 1 && (numeros < 10000000 || numeros > 99999999)) {		// Mensaje de error si el número no es de 8 dígitos
			printf("El numero no es de 8 dígitos. Vuelve a intentarlo: ");
		}
	}
	return 0;
}

int EsMayuscula (char letra) {
	int comprobacion2 = -1;
	printf("Introduce la letra asociada: ");
	
	while (letra > 'Z' || comprobacion2 != 1) {				// Si las 2 comprobaciones fracasan						
		comprobacion2 = scanf("%1c", &letra);				// Pongo %1c para que, si el usuario pone varias letras, pille solo la primera
		while (getchar() != '\n');
		
		printf("%d", comprobacion2);
		if (comprobacion2 != 1) {													// Mensaje de error si el usuario mete un número
			printf("No se ha introducido una letra. Vuelve a intentarlo: ");
		}
		
		if (comprobacion2 == 1 && letra > 'Z') {
			printf("La letra no es mayuscula. Vuelve a intentarlo: ");
		}
	}
	return 0;
}