#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int check ( int n )
{
    int dem = 0;
    while ( n % 2 == 0 )
    {
        dem++;
        n = n / 2;
    }
    return dem;
}

int main ()
{
    int n , k;
    scanf ("%d%d", &n , &k);
    int dem = 0; 
    for ( int i = 2 ; i <= n ; i++ )
    {
        if ( i % 2 == 0 ) dem = dem + check(i);
    }
    if ( dem >= k ) printf ("Yes");
    else printf ("No");
    return 0;
}