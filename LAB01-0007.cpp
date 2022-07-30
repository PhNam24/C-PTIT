#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    int n;
    scanf ("%d", &n);
    int a[n]; 
    double tong = 0;   
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d" , &a[i]);
        tong += a[i];
    }
    printf ("%.3lf", (double)(tong / n));
    return 0;
}