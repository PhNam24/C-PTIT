#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int thuannghich ( long long n ) 
{
    long long m=n;
    long long songuoc=0;
    int t;
    while (m>0) 
    {
        t = m % 10;
        songuoc = songuoc * 10 + t;
        m = m / 10;
    }
    if ( songuoc == n ) return 1;
    return 0;
}

int chiahet ( long long n )
{
    int tong = 0;
    int t;
    while ( n > 0 )
    {
        t = n % 10;
        tong += t;
        n = n / 10;
    }
    if ( tong % 10 == 0 ) return 1;
    return 0;
}

int main ()
{
    test 
    {
        int n;
        scanf ("%d", &n);
        int dem = 0;
        int sodau = pow(10, n-1);
        int socuoi = pow(10,n);
        for ( long long i = sodau + 1 ; i <= socuoi - 1 ; i++ )
        {
            if ( thuannghich(i) == 1 && chiahet(i) == 1 ) dem++;
        }
        printf ("%d", dem);
        printf ("\n");
    }
    return 0;
}
