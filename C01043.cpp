#include <stdio.h>

int giaithua ( int n ) {
	if ( n == 0 ) return 1;
	else if ( n == 1 ) return 1;
		 else return n * giaithua (n - 1);
} 

int main () {
	int n;	
	scanf ("%d", &n);
	int const m=n;
	int tong=0;
	int t;
	while (n>0) {
		t = n % 10;
		tong = tong + giaithua(t);
		n = n / 10;
	}
	if ( tong == m ) printf ("1");
	else printf ("0");
	return 0;
}