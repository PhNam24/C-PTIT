#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

void swap ( int &a , int &b )
{
    int t = a;
    a = b;
    b = t;
}

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
        for ( int j = i + 1 ; j < n ; j++ )
        {
            if ( a[i] > a[j] ) 
            {
                swap (a[i] , a[j]);
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