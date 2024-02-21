#include <stdio.h>

/*void main() {
	int numero = 0, factor = 0, resultado = 0;
	
	printf("Introduce un numero: ");
	scanf("%d", &numero);

	for (factor = numero; factor > 1; factor--); {
		resultado = numero * factor;
	}
	
	printf("%d! = %d", numero, resultado);
}*/

void main(){
 int numero = 0, factorial = 1;
 printf("Introduce un numero: ");
 scanf("%d", &numero);
 
 
 for (int i = 2; i <= numero; i++){		// i se inicializa a 2 y se va multiplicando por números hasta llegar al que le pones
	 factorial *= i;
	 }
 
 printf("%d", factorial);
 
}