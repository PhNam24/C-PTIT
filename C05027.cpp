#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    long long minA = 1000000;
    long long minB = 1000000;
    while (n--)
    {
        int a, b;
        scanf ("%d%d", &a , &b);
        if ( minA > a ) minA = a;
        if ( minB > b ) minB = b;
    }
    printf ("%lld", minA * minB);
    return 0;
}