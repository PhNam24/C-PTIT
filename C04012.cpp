#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
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
                    printf ("%d ", a[i]);
                    dem++;
                    break;
                }
            }           
        }    
    }
    if ( dem == 0 ) printf ("0");
    return 0;
}