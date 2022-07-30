#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    int m = n;
    int b[m];
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d", &a[i]);
        b[i] = a[i];
    }
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < i ; j++ )
        {
            if ( b[i] == b[j] )
            {
                for ( int k = i ; k < m ; k++)
                {                
                    b[k] = b[k+1];
                }
                m--;
                i--;
            }
        }    
    }
    int c[m];
    for ( int i = 0 ; i < m ; i++ )
    {
       c[i] =0;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            if ( a[i] == b[j] ) c[j]++;
        }
    }
    for ( int i = 0 ; i < m ; i++ )
    {
        printf ("%d %d\n", b[i] , c[i]);
    }
    return 0;
}