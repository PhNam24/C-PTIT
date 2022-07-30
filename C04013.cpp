#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int a[n];
	int dem=0;
	for ( int i=0 ; i < n ; i++ ) {
		scanf ("%d", &a[i]);		
	}
	for ( int i=0 ; i<n ; i++ ) {
		int test=0;
		for ( int j=i+1 ; j<n ; j++ ) {
			if ( a[i] == a[j] ) {
				test++;
				break;
			}
		}
		if ( test == 0 ) dem++;
		if ( test >=1 ) dem--;
	}
	printf ("%d\n", dem);
	for ( int i=0 ; i<n ; i++ ) {
		for ( int j=i+1 ; j<n ; j++ ) {
			if ( a[i]>a[j] ) {
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}		
	}
	for ( int i=0 ; i<n ; i++ ) {
		int test=0;
		for ( int j=i+1 ; j<n ; j++ ) {
			if ( a[i] == a[j] ) {
				test++;
				break;
			}
		}
		if ( test == 0 && a[i] != a[i-1] ) printf ("%d ", a[i]);
	}
 	return 0;
}
