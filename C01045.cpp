#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int cuoi = n % 10;
	int dau;
	while (n>0) {
		dau = n % 10;
		n = n / 10;
	}
	printf ("%d %d", dau , cuoi);
	return 0;
}