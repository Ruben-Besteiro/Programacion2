#include <stdio.h>

union bswap32 {
	int numero;
	char bytes[4];
};

void main() {
	union bswap32 bswap32;
	
	bswap32.numero = 1;
	printf("%d", bswap32.bytes[0]);
}