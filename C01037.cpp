#include <stdio.h>

int main () {
	int a,b;
	scanf ("%d%d", &a, &b );
	if ( a > b ) {
		int t=a;
		a=b;
		b=t;
	}
	int tong=0;
	for ( int i=a ; i<=b ; i++ ) {
		tong=tong+i;
	}
	printf ("%d", tong);
	return 0;
}