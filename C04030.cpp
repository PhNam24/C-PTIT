#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	int const t1=t;
	while (t--) {
		printf ("Test %d:\n", t1-t);
		int n;
		scanf ("%d", &n);
		int a[n] , b[n];
		for ( int i=0 ; i<n ; i++ ) {
			scanf ("%d", &a[i]);
		}
		for ( int i=0 ; i<n ; i++ ) {
			scanf ("%d", &b[i]);
		}
		for ( int i=0 ; i<n ; i++ ) {
			for ( int j=i+1 ; j<n ; j++ ) {
				if ( a[i] > a[j] ) {
					int t=a[i];
					a[i]=a[j];
					a[j]=t;
				} 
			}
		}
		for ( int i=0 ; i<n ; i++ ) {
			for ( int j=i+1 ; j<n ; j++ ) {
				if ( b[i] < b[j] ) {
					int t=b[i];
					b[i]=b[j];
					b[j]=t;
				} 
			}
		}
		int c=0 , d=0;
		for ( int i=0 ; i<2*n ; i++ ) {
			if ( i % 2 == 0 ) {
				printf ("%d ", a[c]);
				c++;
			} else {
				printf ("%d ", b[d]);
				d++;
			}
		}
		printf ("\n");
	}
	return 0;
}