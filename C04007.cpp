#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    int n , m , vitri;
    scanf ("%d%d", &n , &m);
    int a[n] , b[m];
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d" , &a[i]);
    }
    for ( int i = 0 ; i < m ; i++ )
    {
        scanf ("%d" , &b[i]);
    }
    scanf ("%d", &vitri);
    for ( int i = 0 ; i < vitri ; i++ ) 
    {
        printf ("%d ", a[i]);
    }
    for ( int i = 0; i < m; i++ )
    {
       printf ("%d ", b[i]);
    }
    for ( int i = vitri; i < n; i++)
    {
       printf ("%d ", a[i]);
    }   
    return 0;
}