#include <stdio.h>

void main() {
	int r1 = 0, g1 = 0, b1 = 0, r2 = 0, g2 = 0, b2 = 0;
	float brillantez1 = 0, brillantez2 = 0;
	
	printf("Introduce las componentes roja, verde y azul de 2 colores (separadas por un espacio)\n");
	
	printf("Color 1: ");
	scanf("%d %d %d", &r1, &g1, &b1);
	
	if (r1 < 0 || g1 < 0 || b1 < 0 || r1 > 255 || g1 > 255 || b1 > 255) {
		printf("Error");
		return;
	}
	
	printf("Color 2: ");
	scanf("%d %d %d", &r2, &g2, &b2);
	
	if (r1 < 0 || g1 < 0 || b1 < 0 || r1 > 255 || g1 > 255 || b1 > 255) {
		printf("Error");
		return;
	}
	
	printf("El color 1 en hexadecimal es #%02x%02x%02x.\n", r1, g1, b1);
	printf("El color 2 en hexadecimal es #%02x%02x%02x.\n", r2, g2, b2);	
	
	brillantez1 = .2126 * r1 + .7152 * g1 + .0722 * b1;
	brillantez2 = .2126 * r2 + .7152 * g2 + .0722 * b2;
	
	if (brillantez1 > brillantez2) {
		printf("El color 1 es mas brillante");
	} else if (brillantez1 < brillantez2) {
		printf("El color 2 es mas brillante");
	} else {
		printf("Los colores son igual de brillantes");
	}
}