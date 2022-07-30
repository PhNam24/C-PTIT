#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		int i=2;
		for ( ; i<=n ; i++ ) {
			int test=0;
			while ( n % i == 0 ) {
				n = n / i;
				test++;
			}
			if ( test ) if ( test > 1 ) while (test--) printf ("%d ", i);
						else printf ("%d ", i); 
		}
		printf ("\n");
	}
	return 0;
}