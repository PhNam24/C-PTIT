#include <stdio.h>
#include <math.h>

int main ()
{
    int m,n;
    scanf ("%d%d", &m , &n);
    int p = abs ( m - n );
    if ( m > n )
    {
        for ( int i = 0 ; i < p ; i++ ) 
        {
            for ( int j = 0 ; j < n ; j++ )
            {
                printf ("%c", n + 64);
            }
            printf ("\n");
        }
        for ( int i = 0 ; i < m - p ; i++ ) 
        {
            for ( int j = 0 ; j < n ; j++ ) 
            {
                if ( j < i ) printf ("%c",n-i+j+64);
                else printf ("%c",n+64);
            }
            printf ("\n");
        } 
    }
    else
        if ( m == n )
        {
            for ( int i = 0 ; i < m ; i++ ) 
            {
                for ( int j = 0 ; j < n ; j++ ) 
                {
                    if ( j < i ) printf ("%c",n-i+j+64);
                    else printf ("%c",n+64);
                }
                printf ("\n");
            }
        }
        else 
        {
            for ( int i = 0 ; i < m + p ; i++ ) 
            {
                if ( i >= p )
                {
                    for ( int j = 0 ; j < n ; j++ ) 
                    {
                        if ( j < i ) printf ("%c",n-i+j+64);
                        else printf ("%c",n+64);
                    }
                    printf ("\n");
                }
            }
        }
    return 0;
}