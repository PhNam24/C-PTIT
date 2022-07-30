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
        if ( a[i] % 2 == 0 ) printf ("%d ", a[i]);  
    }
    printf ("\n");
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a[i] % 2 != 0 ) printf ("%d ", a[i]);
    }
    return 0;
}