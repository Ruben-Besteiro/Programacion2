#include <stdio.h>

void CuentaLetras (char *pcadena, int *pnumcaracteres);

void main() {
	char *pcadena;
	char array[15] = "";
	pcadena = &array[0];
	
	int *pnumcaracteres;
	int tamaño = 0;
	pnumcaracteres = &tamaño;
	
	printf("Introduce una frase: ");
	scanf("%15s", pcadena);
	while (getchar() != '\n');
	
	for (int i = 0; i < 15; i++) {
		if (*(pcadena+i) != '\0') {
			printf("%c", *(pcadena+i));		// Esto funciona (solo a veces)
			*pnumcaracteres++;				// Esto no
		}
	}
	printf("\n%d", *pnumcaracteres);
	
	//CuentaLetras (pcadena, pnumcaracteres);
}

void CuentLetras (char *pcadena, int *pnumcaracteres) {
	for (int i = 0; i < 15; i++) {
		if (*(pcadena+i) != '\0') {
			*pnumcaracteres++;
		}
	}
	printf("El tamaño de la cadena es %d", *pnumcaracteres);
}