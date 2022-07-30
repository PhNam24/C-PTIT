#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    int n;
    scanf ("%d" , &n);
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) scanf ("%d", &a[i]);
    int i , j , min_idx;
    for ( i = 0 ; i < n - 1 ; i++ )
    {
        min_idx = i;
        for ( j = i + 1 ; j < n ; j++ )
        {
            if ( a[j] < a[min_idx] ) 
            {
                min_idx = j;
            }
        }      
        if ( min_idx != i )
        {
            int t = a[min_idx];
            a[min_idx] = a[i];
            a[i] = t;
        }
        for ( int k = 0 ; k < n ; k++ ) printf ("%d ", a[k]); 
        printf ("\n");
    }
    return 0;
}