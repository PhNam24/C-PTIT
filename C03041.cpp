#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    test
    {
        int a,b,c,d;
        scanf ("%d%d%d%d", &a , &b , &c ,&d);
        if ( a - c == b - d ) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}