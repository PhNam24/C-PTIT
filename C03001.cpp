#include <stdio.h>

int main () 
{
	int t;
	scanf ("%d", &t);
	while (t--) 
	{
		long long n;
		scanf ("%lld", &n);
		int tong=0;
		while (n>0) 
		{
			tong = tong + n % 10;
			n = n / 10;
		}
		if ( tong % 10 == 0 ) printf ("YES");
		else printf ("NO");
		printf ("\n");
	}
	return 0;
}