#include <stdio.h>

void main() {
	float precio, dinero = 0;
	int b20 = 0, b10 = 0, b5 = 0, m2 = 0, m1 = 0, m50c = 0, m20c = 0, m10c = 0, m5c = 0, m2c = 0, m1c = 0;
	
	printf("Introduce el precio del producto a comprar y el dinero que se entrega: ");
	scanf("%f %f", &precio, &dinero);
	
	if (dinero > 50) {
		printf("Error");
		return;
	}
	
	int centimos = dinero * 100;
	
	b20 = (int) centimos / 2000;
	centimos -= b20 * 2000;
	
	b10 = (int) centimos / 1000;
	centimos -= b10 * 1000;
	
	b5 = (int) centimos / 500;
	centimos -= b5 * 500;
	
	m2 = (int) centimos / 200;
	centimos -= m2 * 200;
	
	m1 = (int) centimos / 100;
	centimos -= m1 * 100;
	
	m50c = (int) centimos / 50;
	centimos -= m50c * 50;
	
	m20c = (int) centimos / 20;
	centimos -= m20c * 20;
	
	m10c = (int) centimos / 10;
	centimos -= m10c * 10;
	
	m5c = (int) centimos / 5;
	centimos -= m5c * 5;
	
	m2c = (int) centimos / 2;
	centimos -= m2c * 2;
	
	m1c = (int) centimos;

	printf("Las vueltas son:\n");
	printf("%d billete(s) de 20 euros,\n", b20);
	printf("%d billete(s) de 10 euros,\n", b10);
	printf("%d billete(s) de 5 euros,\n", b5);
	printf("%d moneda(s) de 2 euros,\n", m2);
	printf("%d moneda(s) de 1 euro,\n", m1);
	printf("%d moneda(s) de 50 centimos,\n", m50c);
	printf("%d moneda(s) de 20 centimos,\n", m20c);
	printf("%d moneda(s) de 10 centimos,\n", m10c);
	printf("%d moneda(s) de 5 centimos,\n", m5c);
	printf("%d moneda(s) de 2 centimos,\n", m2c);
	printf("y %d moneda(s) de 1 centimo.", m1c);
	
}