#include <stdio.h>
#include <math.h>

int snt ( int n ) {
	int m=sqrt(n);
	if ( n<2 ) return 0;
	if ( n<=3 ) return 1; 
	if ( n % 2 == 0 || n % 3 == 0 ) return 0; 
	for ( int i=5 ; i<=m ; i+=6 ) {
		if ( n % i == 0 || n% ( i + 2 ) == 0 ) return 0;
	}
	return 1; 
}

int main () {
	int t;
	scanf ("%d", &t);
	int const t1=t;
	while (t--) {
		printf ("Test %d:\n", t1-t);
		int n;
		scanf ("%d", &n);
		int a[n];
		int b[100005]={0};
		for ( int i=0 ; i<n ; i++ ) {
			scanf ("%d", &a[i]);
			if ( snt(a[i]) == 1 ) b[a[i]]++;
		}
		int max=0;
		for ( int i=0 ; i<n ; i++ ) {
			if ( max < a[i] ) max = a[i];
		}
		for ( int i=0 ; i<=max ; i++ ) {
			if ( b[i] != 0 ) printf ("%d xuat hien %d lan\n", i , b[i]);
		}
		printf ("\n");
	}
	return 0;
}