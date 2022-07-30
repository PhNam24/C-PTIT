#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    test 
    {
        
        long long n;
        scanf ("%lld", &n);
        printf ("%lld = ", n);
        long long i=2;
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
                if(mu>=1) printf("%lld^%d",i,mu);
                else printf("%lld",i);
                if(n>i)
                    printf(" * ");          
            }
        }
        printf("\n");
    }
	return 0;
} 