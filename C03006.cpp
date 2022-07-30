#include <stdio.h>
#include <math.h>
 
int main () 
{
	int t;
	scanf ("%d", &t);
	int const t1=t;
	while (t--) 
	{			
		long long n;
		scanf ("%lld", &n);
		long long i=2;
		printf ("Test %d: ", t1-t);
		for( ; i<=n; i++)
		{
			int mu=0;
	        while( n%i==0 )
			{
	           ++mu;
	            n=n/i;
	        }
	        if( mu )
			{
	            if( mu>=1 ) printf("%lld(%d) ", i, mu);	                          
	        }
	    }
	    printf ("\n");
	}
	return 0;
} 