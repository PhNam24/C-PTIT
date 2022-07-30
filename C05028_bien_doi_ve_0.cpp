#include <stdio.h>

/* void swap ( int *a , int n , int m)
{
   for ( int i = 0 ; i <= n ; i++ )
    {
        for ( int j = 0 ; j <= m ; j++ )
        {
            int index = ( i * (n - 1) + j );
            if ( a[index] == 1 ) a[index] = 0;
            if ( a[index] == 0 ) a[index] = 1;
        }
    }
} */

char a[1001][1001];

int check ( int n )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( a[i][j] == '1' ) return 0; 
        }
    }
    return 1;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%s" ,a[i]);
    }
    int cnt = 0;
    for ( int i = n - 1 ; i >= 0 ; i-- )
    {
        int c = 0;
        for ( int j = n - 1 ; j >= 0 ; j-- )
        {
            if ( a[i][j] == '1' )
            {
                cnt++;
                for ( int k = 0 ; k <= i ; k++ )
                {
                    for ( int l = 0 ; l <= j ; l++ )
                    {
                        if ( a[k][l] == '1' ) a[k][l] = '0';
                        else a[k][l] = '1';
                    }
                }
            }
            /* for ( int i = 0 ; i < n ; i++ )
            {
                for ( int j = 0 ; j < n ; j++ )
                {
                    printf ("%d ", a[i][j]);        
                }
                printf ("\n");
            } */
            if ( check( n) == 1 ) 
            {
                c = 1;
                break;
            }
        }
        if ( c == 1 ) break; 
    }
    printf ("%d", cnt);
    return 0;
}