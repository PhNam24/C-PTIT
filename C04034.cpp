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
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d" , &a[i]);
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            int t = 0;
            for ( int j = n - 1 ; j > i ; j-- ) 
            {
                if ( a[i] > a[j] ) t++;
            }
            if ( t == n - 1 - i ) printf ("%d ", a[i]); 
        }
        printf ("\n");
    }
    return 0;
}