#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int thuannghich ( long long n ) 
{
    long long m=n;
    long long songuoc=0;
    int t;
    int dem = 0;
    while (m>0) 
    {
        t = m % 10;
        if ( t == 6 ) dem++;
        songuoc = songuoc * 10 + t;
        m = m / 10;
    }
    if ( dem == 0 ) return 0;
    if ( songuoc == n ) return 1;
    return 0;
}

int socuoi ( long long n )
{
    long long tong = 0;
    long long t;
    while ( n > 0 )
    {
        t = n % 10;
        tong += t;
        n = n / 10;
    }
    if ( tong % 10 == 8 ) return 1;
    return 0;
}

int main ()
{
    long long a , b;
    scanf ("%lld%lld", &a , &b);
    if ( a > b )
    {
        long long t = a; 
        a = b;
        b = t; 
    }
    int dem = 0;
    for ( long long i = a ; i <= b ; i++ )
    {
        if ( thuannghich(i) == 1 && socuoi(i) == 1 ) printf ("%lld ", i);
    }
    return 0;
}
