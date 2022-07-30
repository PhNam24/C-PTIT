#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    int n;
    scanf ("%d" , &n);
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) scanf ("%d", &a[i]);
    int buoc = 1;
    for ( int i = 0 ; i < n ; i++ )
    {
        int check = 0;
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( a[j] > a[j+1] ) 
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                check = 1;
            }
        }      
        if ( check == 1 )
        {
            printf ("Buoc %d: ", buoc);
            for ( int k = 0 ; k < n ; k++ ) printf ("%d ", a[k]); 
            buoc++;
        }
        printf ("\n");
    }
    return 0;
}