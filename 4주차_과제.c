#include <stdio.h>
main() {
	int i, j; float hap = 2 + 4, sum = 0;
	for (i = 8; i <= 50; i = i + 2) {
		j = i - 2;
		hap = hap + j;
		sum = sum + (i / hap);
	}
	printf("%f\n", sum);
}
