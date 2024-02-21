#include <stdio.h>

void main() {
	float dinero = 0, descuento = 0, preciocondescuento = 0, iva = 0, preciofinal = 0, caridad = 0;
	char cliente = 0;
	
	printf("Introduce el valor de la compra y el tipo de cliente (V para VIP, N para normal): ");
	scanf("%f %c", &dinero, &cliente);
	
	if (dinero < 0) {
		printf("Error");
	}
	
	switch (cliente) {
		
		case 'V':			// A los clientes VIP se les aplica un descuento del 20% para compras de 100 euros o más y del 10% para el resto
		case 'v':
			if (dinero >= 100) {
				descuento = dinero * -.2;
			} else {
				descuento = dinero * -.1;
			}
			break;
					
		case 'N':			// A los clientes normales se les aplica un descuento del 5% solo para compras de 50 euros o más
		case 'n':
			if (dinero >= 50) {
				descuento = dinero * -.05;
			} else {
			}
			break;
		default:
			printf("Error");
			return;
	}
	
	preciocondescuento = dinero + descuento;
	iva = preciocondescuento * .21;
	preciofinal = preciocondescuento + iva;
	caridad = preciofinal - (int) preciofinal;
	
	printf("+-----------------------+\n");
	printf("|Cliente       |%-8c|\n", cliente);
	printf("+-----------------------+\n");
	printf("|Importe base  |%-8.2f|\n", dinero);
	printf("|Descuento     |%-8.2f|\n", descuento);
	printf("|IVA           |%-8.2f|\n", iva);
	printf("+-----------------------+\n");
	printf("|Precio final  |%-8.2f|\n", preciofinal);
	printf("|Dinero donado |%-8.2f|\n", caridad);
	printf("+-----------------------+");
}