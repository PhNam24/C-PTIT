#include <stdio.h>

int check ( long long n ) 
{
	int t;
	int dem=0;
	int sochuso=0;
	while ( n>0 ) 
	{
		t = n % 10;
		if ( t % 2 == 0 ) dem++;
		n = n / 10;
		sochuso++;
	}
	if ( dem == sochuso ) return 1;
	return 0;
}

int main () 
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		if ( check(n) == 1 ) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}