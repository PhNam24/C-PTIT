#include <stdio.h>
#include <math.h>

int main () 
{
	int m,n;
	scanf ("%d%d", &m , &n);
	int a,b;
	if ( m<n ) 
	{
		a=m;
		b=n;
	}
	else 
	{
		a=n;
		b=m;
	}
	if ( a == 1 ) a=2;
	for ( int i=a ; i<=b ; i++ )
	{
		int tong=1;
		for ( int j=2 ; j<=sqrt(i) ; j++ ) 
		{
			if ( i % j == 0 ) tong = tong + j + i/j;
		}
		if ( tong == i ) printf ("%d ", i);
	}
	return 0;
}