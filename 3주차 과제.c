#include <stdio.h>
main() {
	/*5/(2*3) + 6/(3*4) + 7/(4*5) + ... + 13/(10*11) °á°ú°ª 3.037276 */
/*
	float i; float sum = 0;
	for (i = 5; i <= 13; i++)
		sum = sum + i / ((i-3) * (i-2));
	printf("%f\n", sum);
	printf("\n");
*/	
	int i, j, k; float sum = 0;
	for (i = 5; i <= 13; i++) {
		j = i - 3;
		k = i - 2;
		sum = sum + 1.0 * i / (j * k);
		//printf("%f\n", sum);
	}
	printf("%f\n", sum);
}
