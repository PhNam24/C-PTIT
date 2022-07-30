#include <stdio.h>
#define N 1001
#define M 1001 

int main ()
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        int n , m;
        scanf ("%d%d", &n , &m);
        char a[n][m];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%s", &a[i]);
        }
        long long ans = 0;
        for ( int i = 0 ; i < n  ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {   
                int dem1 = 0 , dem2 = 0;
                if ( a[i][j] == '0' ) continue;
                for( int k = 0 ; k < m ; k++ )
                {
					if( a[i][j] == '1' && a[i][k] == '2' ) dem1++;
					if( a[i][j] == '2' && a[i][k] == '1' ) dem1++;
				}
                for ( int k = 0 ; k < n ; k++ )
                {
                    if ( a[i][j] == '1' && a[k][j] == '2' ) dem2++;
                    if ( a[i][j] == '2' && a[k][j] == '1' ) dem2++;
                }   
                ans += (long long)dem1 * dem2;
            }
        }
        printf ("%d", ans); 
        printf ("\n");
    }
    return 0;
}