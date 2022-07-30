#include <stdio.h>

int main () {
	int m,n;
	scanf ("%d%d", &m , &n);
	for ( int i = 0 ; i < n ; i++ ) {
		for ( int j = 0 ; j< m ; j++ ) {
			if ( i >= 1 && i < n - 1 && j >=1 && j< m-1 ) printf (" ");
			else printf ("*");
		}
		printf ("\n");
	}
	return 0;
}