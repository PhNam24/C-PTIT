#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

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
        long long n;
        scanf ("%lld", &n);
        long long m = n;
        long long socuoi = m % 10;
        long long sodau , sochuso = 0;
        long long p ,q;
        while ( m > 0 )
        {
            sodau = m % 10;
            m = m / 10;
            sochuso++;
        }
        if ( sodau / socuoi != 2 && socuoi / sodau != 2 ) printf ("NO");
        else 
        {
            q = pow(10 , sochuso-1);
            p = (n - sodau * q - socuoi) / 10;
            if ( thuannghich(p) == 1 ) printf ("YES");
            else printf ("NO");          
        }   
        printf ("\n");
    }
    return 0;
}