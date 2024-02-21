#include <stdio.h>
#define Max 100000000000000
//18446744073709551616

float alturas [Max];
	
void main () {	
	alturas [10] = 1.1;
	for (int i = 0; i <= Max; i++) {
		alturas [i] = i;
		printf("%.0f\t", alturas [i]);
	}
}/*

include <stdio.h>
#define Max 5

void main () {
	int edad [Max];
	for (int i = 0; i < Max; i++) {
		edad [i] = i;
		printf("%d\n", edad [i]);
	}
}*/