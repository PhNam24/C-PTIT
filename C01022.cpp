#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		int tong=0;
		while (n>0) {
			tong = tong + n % 10;
			n = n / 10;
		}
		printf ("%d\n", tong);
	}
	return 0;
}