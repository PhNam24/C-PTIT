#include <stdio.h>
#include <math.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while (t--)

long long min ( char *s )
{
    long long kq = 0;
    for ( int i = 0 ; i < strlen(s) ; i++ )
    {
        if ( s[i] == '6' ) kq = kq * 10 + 5;
        else kq = kq * 10 + s[i] - '0';
    }
    return kq;
}

long long max ( char *s )
{
    long long kq = 0;
    for ( int i = 0 ; i < strlen(s) ; i++ )
    {
        if ( s[i] == '5' ) kq = kq * 10 + 6;
        else kq = kq * 10 + s[i] - '0';
    }
    return kq;
}

int main ()
{
    test
    {
        char x1[20] , x2[20];
        scanf ("%s %s", x1 , x2);
        printf("%lld %lld", min(x1) + min(x2) , max(x1) + max(x2));
        printf ("\n");
    }
    return 0;
}