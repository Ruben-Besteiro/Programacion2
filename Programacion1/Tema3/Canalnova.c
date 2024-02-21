#include <stdio.h>

void main() {
	int madre = 0, padre = 0, hijo = 0;
	
	printf("Introduce los canales que quieren ver la madre, el padre y el hijo: ");
	scanf("%d %d %d", &madre, &padre, &hijo);
	
	if (madre < 1 || padre < 1 || hijo < 1) {
		printf("Error");
		return;
	}
	
	if (madre = padre) {
		printf("El canal escogido es el %d", madre);
	} else {
		printf("El canal escogido es el %d", hijo);
	}
}