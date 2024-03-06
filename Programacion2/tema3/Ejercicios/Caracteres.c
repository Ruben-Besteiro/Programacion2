#include <stdio.h>
#include <stdlib.h>

int menu();
void introducirFrase(char *pfrase, char array[10]);
void mostrarResultado(char *pfrase, int argc, char caracteres[]);

void main(int argc, char *argv[]) {
	//printf("%c", *argv[1]);
	char caracteres[10], array[40];
	char *pfrase = &array[0];
	
	if (argc > 11) {
		printf("Debe haber menos de 10 caracteres");
		exit(1);
	}
	
	for (int i = 0; i < 10; i++) {
		caracteres[i] = '\0';
	}
	for (int i = 0; i < argc-1; i++) {
		caracteres[i] = *argv[i+1];
	}
	printf("\n");
	
	int numero;
	do {
		numero = menu();
		switch (numero) {
			case 1: introducirFrase(pfrase, array);
			break;
			case 2: mostrarResultado(pfrase, argc, caracteres);
			break;
			case 3: printf("Gracias por utilizar este programa");
			exit(0);
			break;
			default: printf("Eres tonto");
			exit(1);
		}
	} while (numero != 3);
}

int menu() {
	int numero;
	printf("Pulsa 1 para introducir una nueva frase\n");
	printf("Pulsa 2 para contear los caracteres de la frase anterior\n");
	printf("Pulsa 3 para salir\n");
	scanf("%d", &numero);
	while(getchar() != '\n');
	return numero;
}

void introducirFrase(char *pfrase, char array[10]) {
	printf("Introduce una frase: ");
	for (int i = 0; i < 40; i++) {
		*(pfrase+i) = '\0';		// Inicializo el array
	}
	fgets(array, 40, stdin);
}

void mostrarResultado(char *pfrase, int argc, char caracteres[10]) {
	int cantidades[10];
	for (int h = 0; h < 10; h++) {
		cantidades[h] = 0;		// Inicializo el array
	}

	printf("La frase introducida anteriormente es: ");
	for (int i = 0; i < 40; i++) {
		printf("%c", *(pfrase+i));
	}
	
	for (int j = 0; j < 10; j++) {
		for (int z = 0; z < 40; z++) {
			if (*(pfrase+z) == caracteres[j] || *(pfrase+z) == caracteres[j] - 32) {		// Hago que cuenten tanto la mayúscula como la minúscula
				cantidades[j]++;
			}
		}
	}
	
	for (int k = 0; k < argc-1; k++) {
		printf("%c: %d ocurrencias\n", caracteres[k], cantidades[k]);
	}
}