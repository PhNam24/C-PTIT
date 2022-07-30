#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    int t = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        int d = 1;
        for ( int j = 1 ; j < i + 2 + t ; j ++ )
        {
            printf ("%d", d++);
        }
        t++;
        printf ("\n");
    }
    return 0;
}