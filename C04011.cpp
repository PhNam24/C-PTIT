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
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d" , &a[i]);
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            int t = 0;
            for ( int j = 0 ; j < i ; j++ ) 
            {
                if ( a[i] >= a[j] ) t++;
            }
            if ( t == i ) dem++; 
        }
        printf ("%d", dem);
        printf ("\n");
    }
    return 0;
}