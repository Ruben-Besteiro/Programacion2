#include <stdio.h>

void main() {
int hora = 0, minuto = 0, segundo = 0;

	printf("Pon una hora en notacion de 24 horas (incluyendo segundos): ");
	scanf("%d:%d:%d", &hora, &minuto, &segundo);
	
	if (hora < 0 || hora > 23 || minuto < 0 || minuto > 59 || segundo < 0 || segundo > 59) {
		printf("Error");
		return;
	} else if (hora > 12) {
		hora -= 12;
	}
	
		printf("En notacion de 12 horas, dicha hora seria %02d:%02d:%02d", hora, minuto, segundo);
}