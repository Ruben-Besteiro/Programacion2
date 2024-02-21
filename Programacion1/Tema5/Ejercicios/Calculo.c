#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int GenerarN1 ();
char GenerarOperacion ();
int GenerarN2 (int n1, char op);
int GenerarResultado (int n1, int n2, char op);
int CorregirResultado (int n1, char op);


void main () {	
	srand(getpid());

	int n1 = GenerarN1 ();
	printf("%d ", n1);
	char op = GenerarOperacion ();
	printf("%c ", op);
	int n2 = GenerarN2 (n1, op);
	printf("%d\n", n2);
	
	if (((op == '-') && (n1 - n2 < 0)) || ((op == '/') && ((n1 % n2 != 0)))) {		// Si la resta da menor que 0 o la división es inexacta, llama a la función CorregirResultado
		n2 = CorregirResultado (n1, op);
	}
	
	int resultado = GenerarResultado (n1, n2, op);
	
	
	int solucion = 0, bucle = 0;
	
	while (bucle == 0) {					
		printf("Solucion: ");
		scanf("%d", &solucion);
		if (solucion == resultado) {		// Si el usuario acierta,
			printf("GG");
			bucle++;						// el bucle termina
		} else {							// Ah pero de lo contrario,
			printf("Bien pifiada\n");		// el bucle sigue
		}
	}		
}

int GenerarN1 () {							// Genera el primer número
	int n1 = (rand() % 10);	
	return n1;
}

int GenerarN2 (int n1, char op) {			// Genera el segundo número
	int n2 = (rand() % 10);
	return n2;
}


char GenerarOperacion () {
	char op = 0;
	srand (getpid());
	
	char temp = (rand() % 4);				// Genera un número random para la operación y para ello uso una variable auxiliar
	switch (temp) {							// Y usa un switch que según el número random generado cambia el char de la operación
		case 0: op = '+';
		break;
		case 1: op = '-';
		break;
		case 2: op = '*';
		break;
		case 3: op = '/';
		break;
		printf("%d", temp);
	}
	return op;
}

int GenerarResultado (int n1, int n2, char op) {
	int resultado = 0;

	switch (op) {							// Efectúa la operación
		case '+': resultado = n1 + n2;
		break;
		case '-': resultado = n1 - n2;
		break;
		case '*': resultado = n1 * n2;
		break;
		case '/': resultado = n1 / n2;
		break;
	}
	return resultado;
}

int CorregirResultado (int n1, char op) {
	printf("\nOperacion invalida\n");
	int n2 = (rand() % 10);
	printf("n2 autentico: %d", n2);
	
	if (((op == '-') && (n1 - n2 < 0)) || ((op == '/') && ((n1 % n2 != 0)))) {		// Si la función genera otro número inválido, se llama a sí misma otra vez
		n2 = CorregirResultado (n1, op);
	}
	return n2;
}