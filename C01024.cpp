#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t); 
	while (t--) { 
		int n;
		scanf ("%d", &n);
		int cuoi = n % 10;
		int dau;
		while ( n = n /10 ) {
			dau = n % 10;
		}
		if ( dau == cuoi ) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}