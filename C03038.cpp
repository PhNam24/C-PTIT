#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)
 
int main ()
{
    test
    {
        int n , p ;
        scanf ("%d%d", &n , &p);
        if ( n < p ) printf ("0\n");
        else
        {
            int x = 0;
            while ( n / p != 0)
            {
                x = x + (int)n / p; 
                n = n / p;
            }
            printf ("%d\n", x);
        }
    }
    return 0;
}