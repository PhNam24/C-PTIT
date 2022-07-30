#include <stdio.h> 
#include <math.h>

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

int chiahet ( int n )
{
    int tong = 0;
    int t;
    while ( n > 0 )
    {
        t = n % 10;
        tong += t;
        n = n / 10;
    }
    if ( tong % 5 == 0 ) return 1;
    return 0;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    int dem = 0;
    for ( int i = 1 ; i < n ; i++ )
    {
        if ( snt(i) == 1 && chiahet(i) == 1 )
        {
            printf ("%d ", i);
            dem++;
        }
    }
    printf ("\n%d", dem);
    return 0;
}
