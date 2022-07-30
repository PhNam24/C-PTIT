#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int tich=1;
	while (n>0) {
		tich = tich * (n % 10) ;
		n = n / 10;
	}
	printf ("%d\n", tich);
	return 0;
}