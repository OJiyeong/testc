#include <stdio.h>
main() {
	int i, j, k; float sum = 0;
	for (i = 5; i <= 13; i++) {
		j = i - 3;
		k = i - 2;
		sum = sum + 1.0 * i / (j * k);
	}
	printf("%f\n", sum);
}
