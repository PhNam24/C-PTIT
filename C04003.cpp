#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    test
    {
        int n;
        scanf ("%d", &n);
        int a[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d" , &a[i]);
        }
        int dem = 0;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( a[i] != a[n-1-i] ) dem++;
        }
        if ( dem == 0 ) printf ("YES");
        else printf ("NO");
        printf ("\n");
    }
    return 0;
}