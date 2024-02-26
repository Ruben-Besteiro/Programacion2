#include <stdio.h>

enum fortinaityilababayi {fortinaity, babayi, ekesbokesseresekes, palasteishonfaif, loyitek, haiparekesekesekesekes, grandeftoirini} fortinaityilababayi;
int numero;
char xd[30];

void main() {
	printf("Introduce un numero: ");
	scanf("%d", &numero);
	
	switch (numero) {
		case 0: fortinaityilababayi = fortinaity;
		break;
		case 1: fortinaityilababayi = babayi;
		break;
		case 2: fortinaityilababayi = ekesbokesseresekes;
		break;
		case 3: fortinaityilababayi = palasteishonfaif;
		break;
		case 4: fortinaityilababayi = loyitek;
		break;
		case 5: fortinaityilababayi = haiparekesekesekesekes;
		break;
		case 6: fortinaityilababayi = grandeftoirini;
		break;
		default: printf("Eres gilipollas");
		return;
	}
	
	printf("Has escogido ");
	switch (fortinaityilababayi) {
		case fortinaity: printf("fortinaity");
		break;
		case babayi: printf("babayi");
		break;
		case ekesbokesseresekes: printf("ekesbokesseresekes");
		break;
		case palasteishonfaif: printf("palasteishonfaif");
		break;
		case loyitek: printf("loyitek");
		break;
		case haiparekesekesekesekes: printf("haiperekesekesekesekes");
		break;
		case grandeftoirini: printf("grandeftoirini");
	}
}