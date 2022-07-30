#include <stdio.h>

int main () {
	int n,m;
	scanf ("%d%d", &n ,&m);
	int a[n][m];
	for ( int i=0 ; i<n ; i++ ) {
		for ( int j=0 ; j<m ; j++ ) {
			scanf ("%d", &a[i][j]);
		}
	}
	int c,d;
	scanf ("%d%d", &c , &d);
	for ( int i=0 ; i<n ; i++ ) {
		for ( int j=0 ; j<m ; j++ ) {
			if ( j == c-1 ) printf ("%d ", a[i][d-1]);
			else if ( j == d-1 ) printf ("%d ", a[i][c-1]);
				 else printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}