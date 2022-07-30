#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int a,b;
		int m;
		scanf ("%d%d", &a, &b);
		if ( a < b ) m=a; 
		else m=b;
		if ( a == 0 && b != 0 ) printf ("%d\n", b);
		else if ( a!=0 && b == 0 ) printf ("%d\n", a);
			 else for ( int i=m ; i>=1 ; i-- ) {
					if ( a % i == 0 && b % i == 0 ) {
						printf ("%d\n", i);
						break;
					}
				}
	}
	return 0; 
}