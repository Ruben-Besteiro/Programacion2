#include <stdio.h>
#include <stdlib.h>

typedef enum {
	plastico, madera, cristal, metal
} material;

typedef struct mesa {
	int largo;
	int ancho;
	int alto;
	material material;
	int precio;
} mesa;

void crearMesa(mesa mesas[100], int *cantidadmesas);
void mostrarMesas(mesa mesas[100], int *cantidadmesas);
void calcularPrecio(mesa mesas[100], int *cantidadmesas);

void main() {
	int *cantidadmesas;
	int direccion = 0;
	cantidadmesas = &direccion;
	
	mesa mesas[100];
	int opcion = 0;
	
	do {
		printf("Pulsa 1 para anadir una nueva mesa al pedido\n");
		printf("Pulsa 2 para mostrar todo lo que se ha pedido\n");
		printf("Pulsa 3 para calcular el precio total del pedido\n");
		printf("Pulsa 4 para confirmar tu pedido\n");
		
		scanf("%d", &opcion);
		switch (opcion) {
			case 1: crearMesa(mesas, cantidadmesas);
			direccion++;			// Si incremento el puntero fuera del main deja de funcionar
			break;
			case 2: mostrarMesas(mesas, cantidadmesas);
			break;
			case 3:	calcularPrecio(mesas, cantidadmesas);
			break;
			case 4: printf("El pedido ha sido confirmado\n");
			printf("Gracias por gastar tu dinero");
			exit(0);
			break;
			default: printf("Eres tonto");
		}
	} while (opcion != 4);
}

void crearMesa(mesa mesas[100], int *cantidadmesas) {
	if (*cantidadmesas == 100) {
		printf("Has alcanzado el limite de mesas\n");
		return;
	}
	
	printf("Mesa numero %d\n", *cantidadmesas+1);
	printf("Introduce el largo, ancho y alto de la mesa en cm (separados cada uno por un espacio): ");
	scanf("%d %d %d", &mesas[*cantidadmesas].largo, &mesas[*cantidadmesas].ancho, &mesas[*cantidadmesas].alto);
	printf("Introduce el material de la mesa (0 = plastico / 1 = madera / 2 = cristal / 3 = metal): ");
	scanf("%d", &mesas[*cantidadmesas].material);
	printf("Ahora introduce su precio: ");
	scanf("%d", &mesas[*cantidadmesas].precio);
}

void mostrarMesas(mesa mesas[100], int *cantidadmesas) {
	printf("Las mesas que has pedido son:\n");
	
	for (int i = 0; i < *cantidadmesas; i++) {
		printf("Mesa %d\n", i+1);
		printf("Dimensiones: %dx%dx%d cm\n", mesas[i].largo, mesas[i].ancho, mesas[i].alto);
		printf("Material: ");
		switch(mesas[i].material) {
			case plastico: printf("plastico\n");
			break;
			case madera: printf("madera\n");
			break;
			case cristal: printf("cristal\n");
			break;
			case metal: printf("metal\n");
			break;
		}
		printf("Precio: %d euros", mesas[i].precio);
	}
}

void calcularPrecio(mesa mesas[100], int *cantidadmesas) {
	int numeromesas[5] = {0, 0, 0, 0, 0};
	
	printf("Introduce que mesas quieres calcular su precio total (max. 5, separadas por comas): ");
	scanf("%d,%d,%d,%d,%d", &numeromesas[0], &numeromesas[1], &numeromesas[2], &numeromesas[3], &numeromesas[4]);
	
	int preciototal = 0;
	for (int i = 0; i < *cantidadmesas; i++) {
		if (numeromesas[i] != 0) {
			preciototal += mesas[i].precio;
		}
	}
	printf("El precio total de tu pedido es de %d euros\n", preciototal);
}