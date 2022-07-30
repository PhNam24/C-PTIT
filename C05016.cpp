#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	int const t1=t;
		int n;
		scanf ("%d", &n);
		int const m=n;
		int a[n][n];
		int aij= 1;
		int d=0;
		int hang = n-1 , cot = n-1;
		while ( d <= n/2 ) {
			for ( int i=d ; i<=hang ; i++ ) a[d][i] = aij++;
			for ( int i=d+1 ; i<=cot ; i++ ) a[i][cot] = aij++;
			for ( int i=cot-1 ; i>=d ; i-- ) a[hang][i] = aij++;
			for ( int i=hang-1 ; i>d ; i-- ) a[i][d] = aij++;
			d++;
			hang--;
			cot--; 
		}
		for ( int i=0 ; i<m ; i++ ) {
			for ( int j=0 ; j<m ; j++ ) {
				printf ("%d ", a[i][j]);
			}
			printf ("\n");
		}
		printf ("\n");
	return 0;
}