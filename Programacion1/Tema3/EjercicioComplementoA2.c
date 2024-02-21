#include <stdio.h>

int n1 = 1, n2 = -1;

void main() {
	printf("Elige un numero positivo: ");
	scanf("%x", &n1);
	
	if (n1 < 0) {
		printf("Bien pifiada");
		return;
	} else {
		printf("Ahora elige un numero negativo: ");
		scanf("%x", &n2);
	} if (n2 >= 0) {
		printf("Bien pifiada");
		return;
	} else {
		printf("%x/* / %x", n1, n2);
	}
	
}