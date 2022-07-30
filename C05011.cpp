#include <stdio.h>
 
int main () {
	int t;
	scanf ("%d", &t);
	int const t1=t;
	while (t--) {
		printf ("Test %d:\n", t1-t);
		int m,n;
		scanf ("%d%d", &m, &n);
		int a[m][n],b[n][m],c[m][m];
		for ( int i=0 ; i<m ; i++ ) {
			for ( int j=0 ; j<n ; j++ ) {
				scanf ("%d", &a[i][j]);
			}
		}
		for ( int i=0 ; i<n ; i++ ) {
			for ( int j=0 ; j<m ; j++ ) {
				b[i][j]=a[j][i];
			}
		}
		for ( int i=0 ; i<m ; i++ ) {
			for ( int j=0 ; j<m ; j++ ) {
				c[i][j]=0;
				for ( int k=0 ; k<n ; k++ ) {
					c[i][j]+=a[i][k]*b[k][j];
				}
				printf ("%d ",c[i][j]);
			}
			printf ("\n");
		}
	}
	return 0;
}
