#include <stdio.h>
#include <math.h>

int check ( long long a[], int n){
	for ( int i = n - 1 ; i >= 2; i-- )
    {
        int l = 0;
        int r = i - 1; 
        while ( l < r )
        {
            if ( a[l] + a[r] == a[i] ) return 1;
 			else if ( a[l] + a[r] < a[i] ) l++;
                 else r--;
        }
    }
    return 0;
}

int main ()
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        int n;
        scanf ("%d", &n);
        long long a[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ("%lld", &a[i]);
            a[i] = a[i] * a[i];
        }
        for ( int i = 0 ; i < n - 1  ; i++ )
        {
            for ( int j = i + 1 ; j < n ; j++ )
            {
                if ( a[i] > a[j] )
                {
                    long long t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        if ( check ( a , n ) == 1 ) printf ("YES");
        else printf ("NO");
        printf ("\n");
    }
    return 0;
}