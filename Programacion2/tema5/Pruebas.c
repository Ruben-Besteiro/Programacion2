#include <stdio.h>
#include <stdlib.h>
void main () {
	char str1[10], str2[10], str3[10], str4[10];
	char str5[10], str6[10], str7[10], str8[10];
	FILE *fp;
	fp = fopen ("file.txt", "w+");
	
	fputs("Que viva el Maincra\n", fp);			// Mete esta cadena tal cual dentro del archivo
	fputs("Que viva el Fortenite", fp);			// Luego mete esta otra
	rewind(fp);									// Vuelve al principio del archivo
	
	fseek(fp, 20, SEEK_SET);					// Se salta el primer string y lee solamente el segundo. El número de en medio son los caracteres que hay que avanzar
	fscanf(fp, "%s %s %s %s", str1, str2, str3, str4);
	fscanf(fp, "%s %s %s %s", str5, str6, str7, str8);
	/*for (int i = 0; i < 10; i++) {
		//if (str1[i] == '\0') {
		//	printf("0");
		//} else {
			printf(&str1[i]);
		//}
	}*/
	if (feof(fp) != 0) {
		printf("GG");
	}
	printf("%s %s %s %s\n", str1, str2, str3, str4);		// El segundo string
	printf("%s %s %s %s", str5, str6, str7, str8);			// Datos basura que hay en memoria
	
	fclose(fp);
}