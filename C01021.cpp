#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int tong=0;
	while (n>0) {
		tong = tong + n % 10;
		n = n / 10;
	}
	printf ("%d", tong);
	return 0;
}