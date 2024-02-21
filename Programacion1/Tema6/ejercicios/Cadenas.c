#include <stdio.h>

int CompararCadenas (char nombre1[], char nombre2[]);
int CalcularTamaño1 (char nombre1[]);
int CalcularTamaño2 (char nombre2[]);

void main () {
	char nombre1[14] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};		// Se inicializa todo a \0 para evitar la lectura
	char nombre2[14] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};		// de datos basura
	int tamaño1 = 0, tamaño2 = 0;
	
	printf("Introduce el primer nombre (maximo 14 caracteres): ");
	scanf("%14[^\n]s", &nombre1);
	
	getchar();							// Limpia el búfer (de lo contrario, el segundo scanf no funcionaría
	
	printf("Ahora introduce el segundo nombre (maximo 14 caracteres): ");
	scanf("%14[^\n]s", &nombre2);		// Igual habría sido mejor usar fgets(nombre2, 14, stdin);

	int comprobacion = CompararCadenas (nombre1, nombre2);

	if (comprobacion == 14) {
		printf("Los nombres son iguales\n");
	} else {
		printf("Los nombres no son iguales\n");
	}
	
	tamaño1 = CalcularTamaño1 (nombre1);
	tamaño2 = CalcularTamaño2 (nombre2);
	
	printf("Tamano del primer nombre: %d\n", tamaño1);
	printf("Tamano del segundo nombre: %d", tamaño2);
}

int CompararCadenas (char nombre1[], char nombre2[]) {
	int comprobacion = 0;
	
	for (int i = 0; i < 14; i++) {		// Recorre los arrays y comprueba si cada elemento de nombre1 es el mismo que su contraparte de nombre2
		if (nombre1[i] == nombre2[i]) {
			comprobacion++;
		}
	}
	return comprobacion;
}

int CalcularTamaño1 (char nombre1[]) {
	int tamaño1 = 0, i = 0;
	
	while (nombre1[i] != '\0') {
		i++;
		tamaño1++;
	}
	return tamaño1;
}

int CalcularTamaño2 (char nombre2[]) {
	int tamaño2 = 0, i = 0;
	
	while (nombre2[i] != '\0') {
		i++;
		tamaño2++;
	}
	return tamaño2;
}