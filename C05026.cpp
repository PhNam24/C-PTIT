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
    int b[n];
    for ( int i = 0 ; i < n ; i++ )
    {
        int dem = 0;
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf ("%d", &a[i][j]);
            if ( snt(a[i][j]) == 1 ) dem++;
        }
        b[i] = dem;
    }
    int maxB = 0;
    int idx_max;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( maxB < b[i] ) 
        {
            maxB = b[i];
            idx_max = i;
        }
    }
    printf ("%d\n", idx_max + 1);
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( snt(a[idx_max][i]) == 1 ) printf ("%d ", a[idx_max][i]);
    }
    return 0;
}