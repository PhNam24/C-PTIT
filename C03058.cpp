#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

long long gcd ( long long a, long long b )
{
    if ( b == 0 ) return a;
    return gcd ( b , a % b);
}

long long lcm ( long long a , long long b)
{
    long long ucln = gcd (a , b);
    return a * b / ucln;
}

int main ()
{
    test 
    {
        long long a;
        scanf ("%lld", &a);
        long long kq = 1;
        for ( long long i = 2 ; i <= a ; i++ )
        {
            kq = lcm ( kq , i );
        }
        printf ("%lld\n", kq);
    }
    return 0;
}