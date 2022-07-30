#include <stdio.h>
#include <math.h>
 
int snt ( int n ) 
{
	int m=sqrt(n);
	if (n<2) return 0;
	if (n<=3) return 1; 
	if (n%2==0 || n%3==0) return 0; 
	for ( int i=5 ; i<=m ; i+=6 ) 
	{
		if ( n%i==0 || n%(i+2)==0 ) return 0;
	}
	return 1;
}

int main () 
{
	int n;
	scanf ("%d", &n);
	for ( int i=2 ; i<=n ; i++ ) if ( snt(i) == 1 ) printf ("%d\n", i);
	return 0; 
}	