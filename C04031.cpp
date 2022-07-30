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
        int a[n] , b[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d", &a[i]);
            b[i] = 1;
        }
        for ( int i = 0  ; i < n ; i++ )
        {
            for ( int j = i + 1 ; j < n ; j++ )
            {
                if ( a[j] > a[j-1] ) b[i]++;
                else 
                {
                    i = j - 1;
                    break;
                }
            }
        }
        int dem = 0;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( dem < b[i] ) dem = b[i];
        }
        printf ("%d\n", dem);
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( b[i] == dem )
            {
                for ( int j = i ; j < i + dem ; j++ )
                {
                    printf ("%d ", a[j]);
                }
            }
            printf ("\n");
        }
        printf ("\n");
    }
    return 0;
}