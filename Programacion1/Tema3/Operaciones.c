#include <stdio.h>

void main() {
	int ia = 0, ib = 0, ires1 = 0, ires2 = 0;
	float fa = 0, fb = 0, fres1 = 0, fres2 = 0;
	
	printf("Introduce los valores para ia, ib, fa y fb: ");
	scanf("%d %d %f %f", &ia, &ib, &fa, &fb);
	
	ires1 = ia + (int)fa;
	ires2 = ib + (int)fb;
	
	fres1 = (float)ia + fa;
	fres2 = (float)ib + fb;
	
	printf("ires1 = %d\n", ires1);
	printf("ires2 = %d\n", ires2);
	printf("fres1 = %f\n", fres1);
	printf("fres2 = %f\n", fres2);
}