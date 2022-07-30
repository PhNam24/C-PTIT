#include <stdio.h>
#include <math.h>

int main ()
{
    int m,n;
    scanf ("%d%d", &m , &n);
    int p = abs ( m - n );
    for ( int i=0 ; i<m ; i++ )
    {
        for ( int j=0 ; j<n ; j++ )
        {   
            if ( m <= n ) 
            {
                if ( j < n - i ) printf ("%d", i + j + 1);
                else  printf ("%d" , m - 1 - i + n - 1 - j + 1 + p );
                    
            }
            else 
            {
                if ( j < n - i ) printf ("%d", i + j + 1);
                else 
                    if ( i > p ) printf ("%d", i - j + 1);
                    else
                    {
                        int q = abs( i - j );
                        printf ("%d", q + 1);
                    }                 
            }
        }   
        printf ("\n");
    }
    return 0;
}