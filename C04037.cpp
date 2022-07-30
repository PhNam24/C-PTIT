#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    int n;
    scanf ("%d", &n);
    int a[n] , b[n]; 
    int h = 0;   
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d" , &a[i]);
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 1 ; i + j < n ; j++ )
        {
            int t = 0;
            if ( a[i] == a[i+j] )
            {
                for ( int k = 0 ; k < i ; k++ )
                {               
                    if ( a[i] == a[k] ) t++;   
                }
                if ( t == 0 ) 
                {
                    b[h] = a[i];
                    h++;
                    break;
                }
            }           
        }    
    }
    if ( h == 0 ) printf ("0");
    else 
    {
        for ( int i = 0 ; i < h ; i++ )
        {
            printf ("%d ", b[i]);
        }
    }
    return 0;
}