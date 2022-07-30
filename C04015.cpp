#include <stdio.h>
#include <math.h>

int main ()
{
    int t; 
    scanf ("%d", &t); 
    int const t1 = t;
    while (t--)
    {
        printf ("Test %d:\n", t1 - t);
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
            printf ("%d xuat hien %d lan\n", b[i] , c[i]);
        }
    }
    return 0;
}