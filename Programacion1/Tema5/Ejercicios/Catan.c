#include <stdio.h>

float CalcularProbabilidad (int numero1, int numero2, int numero3);

void main () {
	int numero1 = 0, numero2 = 0, numero3 = 0;
	float probabilidad = 0;
	
	printf("Introduce los 3 numeros del primer pueblo: ");
	scanf("%d %d %d", &numero1, &numero2, &numero3);
		
	while (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
		printf("Error: los numeros no pueden repetirse\n");
		printf("Introduce los 3 numeros del primer pueblo: ");
		scanf("%d %d %d", &numero1, &numero2, &numero3);
	}
	
	probabilidad = CalcularProbabilidad(numero1, numero2, numero3);
	printf("La probabilidad de que el primer pueblo obtenga una carta es del %.2f %\n", probabilidad);
	
	printf("Ahora introduce los 3 numeros del segundo pueblo: ");
	scanf("%d %d %d", &numero1, &numero2, &numero3);
	
	while (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
		printf("Error: los numeros no pueden repetirse\n");
		printf("Introduce los 3 numeros del segundo pueblo: ");
		scanf("%d %d %d", &numero1, &numero2, &numero3);
	}
	
	probabilidad = CalcularProbabilidad(numero1, numero2, numero3);
	printf("La probabilidad de que el segundo pueblo obtenga una carta es del %.2f %\n", probabilidad);
}

float CalcularProbabilidad (int numero1, int numero2, int numero3) {
	int contador = 0;
	float probabilidad = 0;
	switch (numero1) {
		case 0: probabilidad = 0;
		break;
		case 1: probabilidad = 0;
		break;
		case 2: probabilidad = 3.14;
		break;
		case 3: probabilidad = 5.89;
		break;
		case 4: probabilidad = 8.23;
		break;
		case 5: probabilidad = 10.01;
		break;
		case 6: probabilidad = 12.93;
		break;
		case 7: probabilidad = 14.97;
		break;
		case 8: probabilidad = 13.95;
		break;
		case 9: probabilidad = 11.57;
		break;
		case 10: probabilidad = 8.64;
		break;
		case 11: probabilidad = 5.62;
		break;
		case 12: probabilidad = 3.25;
		break;
		default: probabilidad = 0;
		break;
	}
	switch (numero2) {
		case 0: probabilidad += 0;
		break;
		case 1: probabilidad += 0;
		break;
		case 2: probabilidad += 3.14;
		break;
		case 3: probabilidad += 5.89;
		break;
		case 4: probabilidad += 8.23;
		break;
		case 5: probabilidad += 10.01;
		break;
		case 6: probabilidad += 12.93;
		break;
		case 7: probabilidad += 14.97;
		break;
		case 8: probabilidad += 13.95;
		break;
		case 9: probabilidad += 11.57;
		break;
		case 10: probabilidad += 8.64;
		break;
		case 11: probabilidad += 5.62;
		break;
		case 12: probabilidad += 3.25;
		break;
		default: probabilidad += 0;
		break;
	}
	switch (numero3) {
		case 0: probabilidad += 0;
		break;
		case 1: probabilidad += 0;
		break;
		case 2: probabilidad += 3.14;
		break;
		case 3: probabilidad += 5.89;
		break;
		case 4: probabilidad += 8.23;
		break;
		case 5: probabilidad += 10.01;
		break;
		case 6: probabilidad += 12.93;
		break;
		case 7: probabilidad += 14.97;
		break;
		case 8: probabilidad += 13.95;
		break;
		case 9: probabilidad += 11.57;
		break;
		case 10: probabilidad += 8.64;
		break;
		case 11: probabilidad += 5.62;
		break;
		case 12: probabilidad += 3.25;
		break;
		default: probabilidad += 0;
		break;
	}
	return (probabilidad);
}