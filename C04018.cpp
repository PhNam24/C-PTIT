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
        int dem = 0;
        for ( int  i = 0 ; i < n ;  i++ ) 
        {
            scanf ("%d", &a[i]);
        }
        for ( int  i = 0 ; i < n ;  i++ ) 
        {
            if ( a[i] == a[i+1] ) dem++;
        }
        printf ("%d", dem);
        printf ("\n");
    }
    return 0;
}