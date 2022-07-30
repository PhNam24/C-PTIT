#include <stdio.h>

int main ()
{
    int t;
    scanf ("%d", &t);
    int t1 = t;
    while (t--)
    {
        printf ("Test %d:\n", t1 - t);
        int m , n;
        scanf ("%d%d", &n , &m);
        int a[n][m];
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                scanf ("%d", &a[i][j]);
            }
        }
        int tongHang[n];
        for ( int i = 0 ; i < n ; i++ ) tongHang[i] = 0;
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                tongHang[i] += a[i][j];
            }
        }
        int maxHang = 0;
        int idxHang;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( maxHang < tongHang[i] )
            {
                maxHang = tongHang[i];
                idxHang = i;
            } 
        } 
        int tongCot[m];
        for ( int i = 0 ; i < m ; i++ ) tongCot[i] = 0;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( i != idxHang )
            {
                for ( int j = 0 ; j < m ; j++ )
                {
                    tongCot[j] += a[i][j];
                }
            }
        }
        int maxCot = 0;
        int idxCot;
        for ( int i = 0 ; i < m ; i++ )
        {
            if ( maxCot < tongCot[i] )
            {
                maxCot = tongCot[i];
                idxCot = i;
            } 
        } 
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                if( i < idxHang && j >= idxCot )  a[i][j] = a[i][j+1]; 
                else if( i >= idxHang && j < idxCot ) a[i][j] = a[i+1][j]; 
                     else if( i >= idxHang && j >= idxCot ) a[i][j] = a[i+1][j+1];
            }
        }
        n--;
        m--;
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                printf ("%d ", a[i][j]);
            }
            printf ("\n");
        }
    }
    return 0;
}