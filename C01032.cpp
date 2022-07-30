#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    test 
    {
        long long n;
        scanf ("%lld", &n);
        long long i=2;
        int kq = 1;
        for( ; i<=n; i++)
        {
            int mu=0;
            while( n%i==0 )
            {
            ++mu;
                n=n/i;
            }
            if(mu)
            {
                kq = kq * i;        
            }
        }
        printf ("%d", kq);
        printf("\n");
    }
	return 0;
} 