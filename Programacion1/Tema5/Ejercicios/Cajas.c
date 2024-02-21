#include <stdio.h>

int cajaspequeñas = 0, cajasmedianas = 0, cajasgrandes = 0, errores = 0;
void Comprobacion (int cantidad, int contador);

void main () {
	int cantidad = 0, contador = 0, cajas = 0;
	
	printf("Introduce la cantidad de productos que se deben meter en cajas: ");
	scanf("%d", &cantidad);
	printf("Ahora introduce las medidas de cada producto en cm para comprobar en que caja se deben meter");
	
	Comprobacion (cantidad, contador);
}

void Comprobacion (int cantidad, int contador) {	// Como la función es un void, no devuelve nada, su único propósito es el de modular el programa en otros más simples
	float ancho = 0, alto = 0, grosor = 0;

	while (contador < cantidad) {
		printf("\nProducto %d: ", contador + 1);
		scanf("%f %f %f", &ancho, &alto, &grosor);
		
		if (ancho <= 10 && alto <= 10 && grosor <= 15) {
			printf("Se usara una caja pequen~a");
			cajaspequeñas++;
		} else if (ancho <= 20 && alto <= 15 && grosor <= 15) {
			printf("Se usara una caja mediana");
			cajasmedianas++;
		} else if (ancho <= 30 && alto <= 25 && grosor <= 20) {
			printf("Se usara una caja grande");
			cajasgrandes++;
		} else {
			printf("No cabe en ninguna caja");
			errores++;
		}
		
		contador++;
	}
	
	int cajas = cajaspequeñas + cajasmedianas + cajasgrandes;
	printf("\nSe necesitaran %d cajas, de las cuales %d son pequen~as, %d son medianas y %d son grandes, y %d productos no caben en ninguna caja", cajas, cajaspequeñas, cajasmedianas, cajasgrandes, errores);
	
	return;
}