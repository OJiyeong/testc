#include <stdio.h>
main() {
	char hh[] = "We are the champion";
	char Large[80], Small[80];
	int l, s;
	
	printf("%s\n", hh);
	
	//대문자 
	for (l = 0; hh[l] != '\0'; l++) {
		if (hh[l] >= 'a' && hh[l] <= 'z')
			Large[l] = hh[l] - ('a' - 'A');
		else
			Large[l] = hh[l];
	}
	Large[l] = '\0';
	printf("%s\n", Large);
	
	//소문자 
	for (s = 0; hh[s] != '\0'; s++) {
		if (hh[s] >= 'A' && hh[s] <= 'Z')
			Small[s] = hh[s] + ('a' - 'A');
		else //if (hh[s] >= 'a' && h[s] <= 'z')
			Small[s] = hh[s];
	}
	Small[s] = '\0';
	printf("%s\n", Small);
}
