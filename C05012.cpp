#include <stdio.h> 

int main ()
{
    int t;
    scanf ("%d", &t);
    int t1 = t;
    while (t--)
    {
        printf ("Test %d:\n", t1 - t);
        int n;
        scanf ("%d", &n);
        int a[n][n];
        int b[n][n];
        int c[n][n];
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < n ; j++ )
            {
            if ( i < j ) a[i][j] = 0;
            else a[i][j] = j + 1;
            }
        }
        for ( int i = 0 ;i < n ; i++ )
        {
            for ( int j = 0 ; j < n ; j++ )
            {
                if ( i > j ) b[i][j] = 0;
                else b[i][j] = i + 1;
            }
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < n ; j++ )
            {
                c[i][j] = 0;
                for ( int k = 0 ; k < n ; k++ )
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf ("%d ", c[i][j]);
            }
            printf ("\n");
        }
        printf ("\n");
    }
    return 0;
}