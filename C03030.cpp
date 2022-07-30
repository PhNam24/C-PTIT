#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int check ( int n ) 
{
	int t,t1;
	int dem=0;
	int sochuso=0;
	while ( n>0 ) 
	{
		t = n % 10;
		t1 = (n / 10) % 10;
		if ( t < t1 ) return 0;
		else dem++;
		n = n / 10;
		sochuso++;
	}
	if ( dem == sochuso ) return 1;
	return 0;
}

int main () 
{
	test 
	{
		int n;
		scanf ("%d", &n);
		int sodau=pow(10,n-1);
		int socuoi=pow(10,n);
		for ( int i=sodau+1 ; i<=socuoi ; i++ )
		{
			if ( check(i) == 1 ) printf ("%d ", i);		
		}
		printf ("%\n");
	}
	return 0;
}