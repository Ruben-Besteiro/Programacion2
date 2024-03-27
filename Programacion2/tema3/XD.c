#include <stdio.h>
#include <stdlib.h>

void main() {
	char *puntero = (char *) malloc(sizeof(char)*4294967296);
	
	for (unsigned long long i = 0; i < (100000); i++) {
		puntero[i] = '0';
		printf("%d\n", i);
	}
	
	for (unsigned long long i = 0; i < (1000000); i++) {
		printf("%c", puntero[i]);
	}
	
	free(puntero);
}