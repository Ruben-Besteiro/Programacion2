#include <stdio.h>

void main() {
	m = 0;
	printf("m es igual a %d\n", m);
	
	n = m++;
	printf("n = m++: n es igual a m más 1\n");
	
	printf("Sin embargo, n es igual a %d", n);
}