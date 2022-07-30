#include <stdio.h>

int tohop(int k, int n) 
{
    if ( k == 0 || k == n ) return 1;
    else
        if ( k == 1 ) return n;
        else return tohop(k - 1, n - 1) + tohop(k, n - 1);
}

int main ()
{
    int n;
    scanf ("%d", &n);
    for ( int i = 0 ; i < n ; i++ ) 
    {
        for ( int j = 0 ; j <= i  ; j++ )
        {
            printf ("%d ", tohop ( j , i ));
        }
        printf ("\n");
    }
    return 0;
}