#include <stdio.h>

void main(int argc, char * argv[]) {
	printf("Los argumentos del programa son:\n");
	
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}