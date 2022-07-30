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
        int am = 0;
        int max_am = -1e9 - 1;
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d", &a[i]);
            if ( a[i] < 0 ) 
            {
                am++;
                if ( max_am < a[i] ) max_am = a[i];
            }
        }
        if ( am == n ) printf ("%d", max_am);
        else 
        {
            long long sum = 0, res = a[0];
            for (int i = 0 ; i < n ; i++ )
            {
                if( sum + a[i] < 0 )
                {
                    sum = 0;
                    continue;
                }
                sum += a[i];
                if ( res < sum ) res = sum;
            }
            printf ("%lld", res);
        }
        printf ("\n");
    }
    return 0;
}