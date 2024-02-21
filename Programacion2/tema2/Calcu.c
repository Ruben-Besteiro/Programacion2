#include <stdio.h>
#include <stdlib.h>

void main(int argc, char ** argv) {
	int op1, op2;
	float numero1, numero2, resultado;
	
	if (argc != 4) {
		printf("Error: Debes introducir dos sumandos y una operacion");
	} else {
		
		if (argv[1][0] == 'O' && argv[1][1] == 'P' && argv[1][2] == '1' && argv[1][3] == '=' && '0' <= argv[1][4] <= '9') {
			char op1[5] = {argv[1][4], argv[1][5], argv[1][6], argv[1][7], argv[1][8]};
			numero1 = strtof(op1, NULL);
			printf("Operando 1: %.6f\n", numero1);
		}
		if (argv[2][0] == 'O' && argv[2][1] == 'P' && argv[2][2] == '2' && argv[2][3] == '=' && '0' <= argv[2][4] <= '9') {
			char op2[5] = {argv[2][4], argv[2][5], argv[2][6], argv[2][7], argv[2][8]};
			numero2 = strtof(op2, NULL);
			printf("Operando 2: %.6f\n", numero2);
		}
		
		if (argv[3][10] == 's' && argv[3][11] == 'u' && argv[3][12] == 'm' && argv[3][13] == 'a') {
			printf("Has escogido la suma\n");
			resultado = numero1 + numero2;
			printf("%.5f", resultado);
		} else if (argv[3][10] == 'r' && argv[3][11] == 'e' && argv[3][12] == 's' && argv[3][13] == 't' && argv[3][14] == 'a') {
			printf("Has escogido la resta\n");
			resultado = numero1 - numero2;
			printf("%.5f", resultado);
		} else if (argv[3][10] == 'm' && argv[3][11] == 'u' && argv[3][12] == 'l' && argv[3][13] == 't' && argv[3][14] == 'i' && argv[3][15] == 'p' && argv[3][16] == 'l' && argv[3][17] == 'i' && argv[3][18] == 'c' && argv[3][19] == 'a' && argv[3][20] == 'c' && argv[3][21] == 'i' && argv[3][22] == 'o' && argv[3][23] == 'n') {
			printf("Has escogido la multiplicacion\n");
			resultado = numero1 * numero2;
			printf("%.6f", resultado);
		} else {
			printf("Error");
		}
	}
}