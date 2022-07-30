#include <stdio.h>
 
int main () 
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
	printf ("%lld\n", a);
	printf ("%lld", m*n/a); 		
	return 0; 
} 