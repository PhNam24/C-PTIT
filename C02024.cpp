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
                    if ( i == 1 || j == 1 ) printf ("%c", i * j + 64);
                    else 
                        if ( i + j <= p + 1 ) printf ("%c" , i + j - 1 + 64);
                        else printf ("%c" , p + 1 - j + 64);
                }
                printf ("\n");
            }
        }
    }
    else
    {
        for ( int i = 1 ; i <= q ; i++ )
        {
            for ( int j = 1 ; j <= q  ; j++ )
            {
                if ( i == 1 || j == 1 ) printf ("%c", i * j + 64);
                else 
                    if ( i + j <= q + 1 ) printf ("%c" , i + j - 1 + 64);
                    else printf ("%c" , q + 1 - j + 64);
            }
            printf ("\n");
        }
        for ( int i = 1 ; i <= p - q ; i++ )
        {
            for ( int j = q ; j >= 1 ; j-- )
            {
                printf ("%c" , j + 64);
            }
            printf ("\n");
        }
    }
    return 0;
}