#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    int chan[n] , le[n];
    int c = 0 , d = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d", &a[i]);
    }
    for ( int i = 0 ; i < n ; i++ ) 
    {
        for ( int j = i + 1 ; j < n ; j++ )
        {
            if ( a[i] > a[j] ) 
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a[i] % 2 == 0 ) 
        {
            chan[c] = a[i];
            c++;
        }
        else 
        {
            le[d] = a[i];
            d++;
        }
    }
    for ( int i = 0 ; i < c ; i++ )
    {
        printf ("%d ", chan[i]);
    }
    for ( int i = 0 ; i < d ; i++ )
    {
       printf ("%d ", le[i]);
    }
    return 0;
}