#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    int buoc = 1;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%d", &a[i]);
    }
    printf ("Buoc 0: %d\n", a[0]);
    for ( int i = 1 ; i < n ; i++ )
    {
        int key = a[i];
        int j = i - 1;
        while ( j >= 0 & a[j] > key )
        {
            a[j+1] = a[j];
            j = j - 1; 
        }
        a[j+1] = key;
        printf ("Buoc %d: ", buoc);
        for ( int k = 0 ; k <= i ; k++ ) printf ("%d ", a[k]); 
        buoc++;
        printf ("\n");
    }
    return 0;
}