#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int snt ( int n )
{
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( n % 2 == 0 || n % 3 == 0 ) return 0;
    for ( int i = 5 ; i <= sqrt(n) ; i+=6 )
    {
        if ( n % i == 0 || n % (i + 2) == 0 ) return 0;
    }
    return 1;
}

int thuannghich ( long long n ) 
{
    long long m=n;
    long long songuoc=0;
    while (m>0) 
    {
        songuoc = songuoc * 10 + m % 10;
        m = m / 10;
    }
    if ( songuoc == n ) return 1;
    return 0;
}

int main ()
{
    test 
    {
        int a , b;
        scanf ("%d%d", &a , &b);
        int dem = 0;
        for ( int i = a ; i <=b ; i++ ) 
        {
            if ( thuannghich(i) == 1 && snt(i) == 1 ) 
            {
                printf ("%d ", i);
                dem++; 
                if ( dem == 10 )
                {
                    printf ("\n");
                    dem = 0;
                }
            }
           
        }
        printf ("\n\n"); 
    }
    return 0;
}
