#include <stdio.h>
#include <math.h>

int snt ( int n ) {
	int m=sqrt(n);
	if (n<2) return 0;
	if (n<=3) return 1; 
	if (n%2==0 || n%3==0) return 0; 
	for ( int i=5 ; i<=m ; i+=6 ) {
		if ( n%i==0 || n%(i+2)==0 ) return 0;
	}
	return 1; 
}

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		if ( snt(n) == 0 ) printf ("NO\n");
		else printf ("YES\n");
	}
	return 0;
}