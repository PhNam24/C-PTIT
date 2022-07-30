#include <stdio.h>
 
int main () 
{	
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long a,b; 
		scanf ("%lld %lld", &a, &b);
		const long long m=a;
		const long long n=b;
		while (a!=b) 
		{
			if (a>b) 
				a-=b;
			else 
				b-=a;
		}
		printf ("%lld ", m*n/a);
		printf ("%lld", a); 
		printf ("\n");	
	}
	return 0; 
} 