#include <stdio.h>
#include <math.h>

int max ( int a , int b )
{
    if ( a > b ) return a;
    return b;
}

int min ( int a , int b )
{
    if ( a > b ) return b;
    return a;
}

int main () 
{
    int m , n;
    scanf ("%d%d", &m , &n);
    int p = max (m , n);
    int q = min (m , n);
    if ( m <= n )
    {
        for ( int i = 1 ; i <= p ; i++ )
        {
            if ( i <= q )
            {
                for ( int j = 1 ; j <= p  ; j++ )
                {
                    if ( i == 1 || j == 1 ) printf ("%c", i * j + 63);
                    else 
                        if ( i + j <= p + 1 ) printf ("%c" , i + j - 1 + 63);
                        else printf ("%c" , p + 63);
                }
                printf ("\n");
            }
        }
    }
    else
    {
        for ( int i = 1 ; i <= p ; i++ )
        {
            if ( i <= q )
            {
                for ( int j = 1 ; j <= q  ; j++ )
                {
                    if ( i == 1 || j == 1 ) printf ("%c", i * j + 63);
                    else 
                        if ( i + j <= q + 1 ) printf ("%c" , i + j - 1 + 63);
                        else printf ("%c" , q + 63);
                }
                printf ("\n");
            }
            else 
            {
                for ( int j = 1 ; j <= q ; j++ )
                {
                    printf ("%c", q + 63);
                }
                printf ("\n");
            }
        }
    }
    return 0;
}