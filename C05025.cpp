#include <stdio.h>

int main ()
{
    int t;
    scanf ("%d", &t);
    int t1 = t;
    while (t--)
    {
        printf ("Test %d:\n", t1 - t);
        int n , m;
        scanf ("%d%d", &m , &n);
        int a[n][m];
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                scanf ("%d", &a[i][j]);
            }
        }
         for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                for ( int k = i ; k < n ; k++ )
                {
                    for ( int l = j ; l < m ; l++ )
                    {
                        if ( a[i][j] > a[k][l] )
                        {
                            int t = a[i][j];
                            a[i][j] = a[k][l];
                            a[k][l] = t;
                        }
                    }
                }
            }
        }
         for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                printf ("%d ", a[i][j]);
            }
            printf ("\n");
        }
        printf ("\n");
    }
    return 0;
}