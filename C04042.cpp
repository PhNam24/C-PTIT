#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    test
    {
        int n;
        scanf ("%d", &n);
        int a[n];
        int b[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d", &a[i]);
            b[i] = 1;
        }
        int t1 = 0;
        for ( int i = 0 ; i < n ; i++ )
        {   
            int t2 = 0;
            if  ( b[i] )
            {
                for ( int j = i + 1 ; j < n ; j++ )
                {
                    if ( a[i] == a[j] ) 
                    {
                       t2 = 1;
                       break;
                    }
                }
            }
            if ( t2 == 1 )
            {
                printf ("%d\n", a[i]);
                t1 = 1;
                break;
            } 
        }
        if ( t1 == 0 ) printf ("NO\n");
    }
    return 0;
}