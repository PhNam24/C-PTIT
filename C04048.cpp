#include <stdio.h>
#include <math.h>

int main ()
{
    int n , m , k;
    scanf ("%d%d%d", &n , &m , &k);
    int a[m];
    for ( int i = 0 ; i < m ; i++ )
    {
        scanf ("%d", &a[i]);
    }
    if ( k == 0 ) printf ("%d", n - m);
    else 
    {
        int p = 2 * ( m + 1 );
        int b[p];
        b[0] = 1;
        b[p-1] = n;
        int d = 1;
        for ( int i = 0 ; i < m ; i++ )
        {
            b[i+d] = a[i] - k;
            b[i+d+1] = a[i] + k;
            d++;
        }
        int dem = 0;
        for ( int i = 0 ; i < p ; i++ )
        {
            if ( i % 2 != 0 )
            {
                int e = b[i] - b[i-1];
                if ( i > 1 && i < p - 1 ) e--;
                if ( e > 0 )
                {
                    if ( e <= 2 * k + 1 ) dem++;
                    if ( e > 2 * k + 1 )
                    {
                        if ( e % ( 2 * k + 1 ) == 0 ) dem = dem + e / ( 2 * k + 1 );
                        else dem = dem + e / ( 2 * k + 1 ) + 1; 
                    }
                }
            }
        }
        printf ("%d", dem);
    }
    return 0;
}