#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int a[n];
	for ( int i=0 ; i<n ; i++ ) {
		scanf ("%d", &a[i]);
	}
	int m;
	scanf ("%d", &m);
	for ( int i=m ; i<n ; i++ ) {
		printf ("%d ", a[i]);
	}
	for ( int i=0 ; i<m ; i++ ) {
		printf ("%d ", a[i]);
	}
	return 0;
}