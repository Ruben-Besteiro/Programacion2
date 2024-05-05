#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char a[8] = "abcdefg";
	char *ptr = NULL;
	ptr = (char *) malloc (6 * sizeof(char))
	
	memcpy(ptr, a, 5*sizeof(char));
	ptr[5] = '\0';
	
	printf("%s\n", a);
	printf("%s\n", ptr);
}