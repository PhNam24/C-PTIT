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
    test
    {
        int n;
        scanf ("%d", &n);
        int a[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d" , &a[i]);
            if ( snt(a[i]) == 1 ) printf ("%d ", a[i]);
        }
        printf ("\n");
    }
    return 0;
}