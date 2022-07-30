#include <stdio.h>
#include <math.h>

int b[100005] = {0};

int main () 
{
    int n;
    scanf ("%d", &n);
    int m = 2 * n -2;
    int a[m];
    for  ( int i=0 ; i<m ; i++ ) 
    {
        scanf ("%d", &a[i]);
        b[a[i]]++;
    }
    int test = 0;
    for ( int i=1 ; i<n+1 ; i++) 
    {
        if ( b[i] == n - 1 ) 
        {
            test = 1;
            break;
        }
    }
    if ( test == 1 ) printf ("Yes");
    else printf ("No"); 
    return 0;
}