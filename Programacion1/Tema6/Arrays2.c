#include <stdio.h>

void main () {
	int edades [5] = {1, 2, 3, 4, 5};
	
	edades [1] = 10;
	
	printf("%d", edades [4]);
	
	for (int i = 0; i <= 5; i++) {
		printf("%d\t", edades [i]);
	}
	
	scanf("%d\n" &edades [2]);
}