#include <stdio.h> 
#include <math.h>

int main () 
{
    int t; 
    scanf ("%d", &t);
    int const t1=t;
    while (t--)
    {
        printf ("Test %d:\n", t1-t);
        int n , m , p;
        scanf ("%d%d%d", &n , &m , &p);
        int a[n] , b[m];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d" , &a[i]);
        }
        for ( int i = 0 ; i < m ; i++ )
        {
            scanf ("%d" , &b[i]);
        }
        for ( int i = 0 ; i < p; i++ ) 
        {
            printf ("%d ", a[i]);
        }
        for ( int i = 0; i < m; i++ )
        {
        printf ("%d ", b[i]);
        }
        for ( int i = p; i < n; i++)
        {
        printf ("%d ", a[i]);
        }   
        printf ("\n");
    }
    return 0;
}