#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int check ( long long n ) 
{
    long long t;
    while ( n>0 )
    {
        t = n % 10;
        if ( t == 2 || t == 3 || t == 4 || t == 5 || t == 6 || t == 7 ) return 0;
        n = n / 10;
    }
    return 1;
}

int main () 
{
    test 
    {
        long long n;
        scanf ("%lld", &n);
        long long m=n;
        if ( check(n) == 0 ) printf ("INVALID");
        else 
        {
            int t;
            int a[20];
            int d = 0;
            while ( m>0 )
            {
                t = m % 10;
                if ( t == 1 ) 
                {
                    a[d] = 1;
                    d++;
                }
                else 
                {
                    a[d] = 0;
                    d++;
                }
                m = m / 10;
            }
            int j;
            int dem = 0;
            for ( int i = d - 1 ; i >= 0 ; i-- )
            {
                if ( a[i] == 1 ) 
                {
                    j = i;
                    dem++;
                    break;
                }
            } 
            if ( dem == 0 ) printf ("INVALID");
            else
                for ( int i = j ; i >= 0 ; i-- )
                {
                    printf ("%d", a[i]);
                } 
        }
        printf ("\n");
    }
    return 0;
}