#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int checktong ( long long n ) 
{
    int t;
    int tong=0;
    while (n>0)
    {
        t= n % 10;
        if ( t % 2 == 0 ) return 0;
        else tong += t;
        n = n / 10;
    }
    if ( tong % 2 == 0) return 0;
    return 1;
} 
int thuannghich ( long long n ) 
{
    long long m=n;
    long long songuoc=0;
    while (m>0) 
    {
        songuoc = songuoc * 10 + m % 10;
        m = m / 10;
    }
    if ( songuoc == n ) return 1;
    return 0;
}

int main () 
{
    test
    {
        long long n;
        scanf ("%lld", &n);
        if ( checktong(n) == 1 && thuannghich(n) == 1 ) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}