#include <stdio.h>

int main ()
{
    int m , n;
    scanf ("%d%d", &m , &n);
    int a[m][n];
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf ("%d", &a[i][j]);
        }
    }
    int x , y;
    scanf ("%d%d", &x , &y);
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( i == x - 1 ) printf ("%d ", a[y-1][j]);
            else if ( i == y - 1 ) printf ("%d ", a[x-1][j]);
                 else printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}