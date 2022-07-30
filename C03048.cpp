#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int check ( long long n ) 
{
    if ( n % 2 != 0 ) return 0;
    long long t;
    int chan=0 , le=0;
    while (n>0)
    {
        t= n % 10;
        if ( t % 2 == 0 ) chan++;
        else le++;
        n = n / 10;
    }
    if ( chan > le ) return 1;
    return 0;
} 

int main () 
{
    test
    {
        long long n;
        scanf ("%lld", &n);
        if ( check(n) ) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}