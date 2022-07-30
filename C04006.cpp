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
        printf ("%d ", a[n-1-i]);
    }
    return 0;
}