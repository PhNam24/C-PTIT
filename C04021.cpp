#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    int n , m;
    scanf ("%d", &n);
    int a[n];    
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d" , &a[i]);
    }
    scanf ("%d", &m);
    for ( int i = n - m ; i < n ; i++ )
    {
        printf ("%d ", a[i]);
    }
    for ( int i = 0 ; i < n - m ; i++ )
    {
        printf ("%d ", a[i]);
    }
    return 0;
}