#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)



int main ()
{
    test
    {
        int b[30001] = {0};
        scanf ("\n");
        int n; 
        scanf ("%d", &n);
        int a[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%d", &a[i]);
            b[a[i]]++;
        }
        int maxa = a[0];
        for ( int i = 0 ; i < n ; i++ ) 
        {
            if ( maxa <= a[i] ) maxa = a[i];
        }
        int c[n];
        int e = 0 , dem = 0;
        int maxb = b[0];
        for ( int i = 0 ; i <= maxa ; i++ ) 
        {
            if ( maxb <= b[i] ) maxb = b[i];
        }
        for ( int i = 0 ; i <= maxa ; i++ )
        {
            if ( b[i] == maxb ) 
            {
                dem++;
                c[e] = i;
                e++;
            }
        }
        if ( dem == 1 ) printf ("%d", c[0]);\
        else 
        {
            for ( int i = 0 ; i < n ; i++ )
            {
                for ( int j = 0 ; j < i ; j++ )
                {
                    if ( a[i] == a[j] )
                    {
                        for ( int k = i ; k < n ; k++)
                        {                
                            a[k] = a[k+1];
                        }
                        n--;
                        i--;
                    }
                }    
            }
            for ( int i = 0 ; i < n ; i++ )
            {
                for ( int j = 0 ; j < e ; j++ ) 
                {
                    if ( a[i] == c[j] )
                    {
                        printf ("%d ", a[i]);
                        break;
                    }
                }
            }
        }
        printf ("\n");
    }
    return 0;
}