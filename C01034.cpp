#include <stdio.h>
#include <math.h>

int main () {
	int m,n;
	scanf ("%d%d", &m ,&n);
	int a=sqrt(m);
	if ( a * a != m ) a=a+1;
	int b=sqrt(n);
	int dem = b - a + 1;
	printf ("%d\n",dem); 
	for ( int i=a ; i<=b ; i++ ) {
		printf ("%d\n", i * i);
	}
	return 0;
}