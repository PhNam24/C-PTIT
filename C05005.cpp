#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	int const t1=t;
	while (t--) {
		printf ("Test %d:\n", t1-t);
		int n,m;
		scanf ("%d%d", &n ,&m);
		int a[n][m];
		for ( int i=0 ; i<n ; i++ ) {
			for ( int j=0 ; j<n ; j++ ) {
				scanf ("%d", &a[i][j]);
			}
		}
		for ( int i=1 ; i<n ; i++ ) {
			for ( int j=1 ; j<n ; j++ ) {
				printf ("%d ", a[i][j]);
			}
			printf ("\n");
		}
		printf ("\n");
	}
	return 0;
}