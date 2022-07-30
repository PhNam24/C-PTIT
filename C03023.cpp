#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int thuannghich ( int n ) 
{
    int m=n;
    int songuoc=0;
    int t;
    while (m>0) 
    {
        t = m % 10;
        if ( t == 9 ) return 0;
        else
        {
            songuoc = songuoc * 10 + t;
            m = m / 10;
        }
    }
    if ( songuoc == n ) return 1;
    return 0;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    int dem = 0;
    for ( int i = 2 ; i <= n ; i++ )
    {
        if (thuannghich(i)) 
        {
            printf ("%d ", i);
            dem++;
        }
    }
    printf ("\n%d", dem);
    return 0;
}