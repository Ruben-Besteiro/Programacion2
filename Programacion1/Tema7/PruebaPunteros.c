#include <stdio.h>

void Escaneo(char *puntero);
void Frase(char *array);

void main() {
	char *puntero;			// "Resérvame una dirección de memoria llamada puntero que contenga un char
	char caracter = 'a';	// Se debe declarar una variable con el prop
	puntero = &caracter;	// El puntero es igual a la dirección de memoria en la que se almacena el carácter, siendo esta 000000d1837ff947
	
	printf("La direccion de memoria es %p\n", puntero);
	printf("Lo que hay en la direccion de memoria es %c\n", *puntero);	// El * nos permite ver qué hay almacenado en la dirección apuntada
	
	Escaneo(puntero);
	
	char *array;
	char cadena[20];
	for (int i = 0; i < 20; i++) {
		cadena[i] = 'A';
	}
	array = &cadena;
	
	printf("El array es ");
	for (int j = 0; j < 20; j++) {
		printf("%c", *(array+j));
	}
	printf("\n");
	
	Frase(array);
}

void Escaneo(char *puntero) {
	printf("Introduce un caracter: ");
	scanf("%c", puntero);			// Hacemos un cambio en la variable carácter no por su nombre, sino por su dirección. No hace falta poner el &
	while(getchar() != '\n');
	
	printf("Ahora lo que hay es %c\n", *puntero);	// Este printf es igual que el anterior, pero como hemos cambiado la variable, se almacena aquí
}

void Frase(char *array) {
	printf("Introduce una frase: ");
	
	for (int k = 0; k < 20; k++) {		// Limpia el array antes de que el usuario introduzca la frase
		*(array+k) = '\0';
	}
		
	scanf("[^\n]%s", array);
	
	printf("Ahora el array es ");		// No funciona
	for (int k = 0; k < 20; k++) {
		printf("%c", *(array+k));
	}
}