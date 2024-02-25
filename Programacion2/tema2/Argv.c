#include <stdio.h>

void main(int argc, char ** argv) {
	printf("Argv es ");
	
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}