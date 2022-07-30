#include <stdio.h> 
#include <math.h>
 
int main () 
{
	long long n;
	scanf("%lld",&n);
	long long f1=1;
	long long f2=1;
	long long a=2;
	while (a<n) {
		a=f1+f2;
		f1=f2; 
		f2=a;		
	}
	if (n==a||n==1) printf ("1");
	else printf ("0");		
	return 0;
}