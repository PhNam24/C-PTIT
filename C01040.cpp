#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int tong=0;
	for ( int i=1 ; i<=n/2 ; i++ ) {
		if ( n % i == 0 ) tong = tong + i ;
	}
	if ( tong == n ) printf ("1");
	else printf ("0");
	return 0;
}