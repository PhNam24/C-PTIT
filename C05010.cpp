#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int snt ( int n )
{
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( n % 2 == 0 || n % 3 == 0 ) return 0;
    for ( int i = 5 ; i <= sqrt(n) ; i+=6 )
    {
        if ( n % i == 0 || n % (i + 2) == 0 ) return 0;
    }
    return 1;
}

int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n][n];
	int tong = 0;
	for ( int i = 0 ; i < n ; i++ )
	{
		for ( int j = 0 ; j < n ; j++ )
		{
			scanf ("%d", &a[i][j]);
		}
	}
	for ( int i = 0 ; i < n ; i++ )
	{
		for ( int j = n -1 ; j >= i ; j-- )
		{
			if ( snt(a[i][j]) ) tong += a[i][j]; 
		}
	}
	printf ("%d", tong);
	return 0;
}