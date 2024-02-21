#include <stdio.h>
#include <math.h>

void main () {
	float y = 0;
	
	printf("Tabla de sen (2x) - x\n");
	printf("+------------+\n");
	printf("|x   |y      |\n");
	printf("|------------|\n");
	
	for (float x = 0; x <= 10; x += .5) {
		y = sin (2 * x) - x;
		printf("|%-4.1f|%-7.4f|\n", x, y);
	}
	
	printf("+------------+");
}