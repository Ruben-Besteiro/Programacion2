#include <stdio.h>
void main() {
	float segundos = 0;
	int semanas = 0, dias = 0, horas = 0, minutos = 0;
	
	printf("Introduce una cantidad de segundos: ");
	scanf("%f", &segundos);
	
	semanas = (int) segundos / 604800;
	segundos = (int) segundos % 604800;
	printf("%d semana(s), ", semanas);
	
	dias = (int) segundos / 86400;
	segundos = (int) segundos % 86400;
	printf("%d dia(s), ", dias);
	
	horas = (int) segundos / 3600;
	segundos = (int) segundos % 3600;
	printf("%d hora(s), ", horas);
	
	minutos = (int) segundos / 60;
	segundos = (int) segundos % 60;
	printf("%d minuto(s) y %.2f segundo(s).", minutos, segundos);
}