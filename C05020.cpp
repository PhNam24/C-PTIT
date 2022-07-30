#include <stdio.h>
#include <math.h>

long long fibo ( int n ) 
{
	long long f0 = 0;
    long long f1 = 1;
    long long fn = 1;
    long long i;
    if (n < 0) 
	{
        return -1;
    } 
	else 
	if (n == 0 || n == 1) 
	{
        return n;
    } 
	else 
	{
        for (i = 2; i < n; i++) 
		{
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}


int main () 
{
        long long fb[82];
        for ( int i = 0 ; i < 82 ; i++ )
        {
            fb[i] = fibo(i);
        }
        int n;
        scanf ("%d", &n);
        int const m=n;
        long long a[n][n];
        int d=0;
        int hang = n-1 , cot = n-1;
        int idx = 0;
        while ( d <= n/2 ) {
            for ( int i=d ; i<=hang ; i++ )
            {
                a[d][i] = fb[idx];
                idx++;
            } 
            for ( int i=d+1 ; i<=cot ; i++ )
            { 
                a[i][cot] = fb[idx];
                idx++;
            }
            for ( int i=cot-1 ; i>=d ; i-- )
            {
                a[hang][i] = fb[idx];
                idx++;
            } 
            for ( int i=hang-1 ; i>d ; i-- ) 
            {
                a[i][d] = fb[idx];
                idx++;
            }
            d++;
            hang--;
            cot--; 
        }
        for ( int i=0 ; i<m ; i++ ) 
        {
            for ( int j=0 ; j<m ; j++ ) 
            {
                printf ("%lld ", a[i][j]);
            }
            printf ("\n");
        }
	return 0;
}