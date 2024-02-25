#include <stdio.h>

void main(int argc, char **argv) {
	printf("Se han introducido %d argumentos\n", argc);
	printf("Los argumentos introducidos son:\n");
	
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
		/*for (int j = 0; j < 200; j++) {
			printf("%c", argv[i][j]);
		}
		printf("\n");*/
	}
}