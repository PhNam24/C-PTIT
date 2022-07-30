#include <stdio.h>
#include <math.h>

int main () 
{
	int n;
	scanf ("%d", &n);;
	for ( int i=2 ; i<=n ; i++ )
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