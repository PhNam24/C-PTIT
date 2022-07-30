#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    test 
    {
        int a[10] = { 1 , 2 , 5 , 10 , 20 , 50 , 100 , 200 , 500 , 1000 };
        int n;
        scanf ("%d", &n);
        int dem = 0;
        for ( int i = 9 ; i >= 0 ; i-- )
        {
            if ( n >= a[i] ) 
            {
                n = n - a[i];
                i++;
                dem++;
            }
        } 
        printf ("%d\n", dem);
    }
    return 0;
}