#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *leeLineaDinamica();
char *leeLineaDinamicaBloques();

typedef struct {
	char *nombre_alumno_p;
} estructura;

int main(int argc, char *argv[]){
	estructura estructura;

	printf("Introduce el nombre del alumno: ");
	
	estructura.nombre_alumno_p = leeLineaDinamica();
	
	printf("%s\n", estructura.nombre_alumno_p);
	
	//estructura.nombre_alumno_p = leeLineaDinamicaBloques();
	
	estructura.nombre_alumno_p[5] = 'X';				// Aunque nombre_alumno_p sea un puntero, aun así es posible manejarlo como un array
	printf("%s\n", estructura.nombre_alumno_p);
	
	free(estructura.nombre_alumno_p);
	
	return 0;
}

char *leeLineaDinamica() {
	char newchar;
	char *nombre;
	int i = 0;
	
	nombre = (char *) malloc((i+1)*sizeof(char));
	
	while((newchar = getchar()) != '\n') {
		nombre = (char *) realloc(nombre,(i+1)*sizeof(char));
		nombre[i] = newchar;
		i++;
	}
	
	nombre[i] = '\0';
	
	return nombre;
}

char *leeLineaDinamicaBloques() {
	char newchar;
	char *nombre;
	int i = 0;
	int tam_bloque = 10;
	
	nombre = malloc((tam_bloque+1)*sizeof(char));		// Reserva memoria para 11 chars
	
	while((newchar = getchar()) != '\n'){
		
		if(i == tam_bloque){
			tam_bloque += 10;
			nombre = (char *) realloc(nombre,(i+10)*sizeof(char));
			printf("\nTamanio aumentado\n");
			nombre[i] = newchar;
			i++;
		}else{
			nombre[i] = newchar;
			i++;
		}
	}
	
	nombre[i] = '\0';
	
	return nombre;
}