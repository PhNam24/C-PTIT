#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    int n;
    scanf ("%d", &n);
    int a[n]; 
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d" , &a[i]);
    }
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
        printf ("%d ", a[i]);
    }
    return 0;
}