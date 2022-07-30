#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int snt ( int n ) 
{
	int m=sqrt(n);
	if (n<2) return 0;
	if (n<=3) return 1; 
	if (n%2==0 || n%3==0) return 0; 
	for ( int i=5 ; i<=m ; i+=6 ) 
	{
		if ( n%i==0 || n%(i+2)==0 ) return 0;
	}
	return 1; 
}

int main () 
{
	test 
	{
		int a,b;
		scanf ("%d%d", &a, &b);
		int dem=0;
		for ( int i=a ; i<=b ; i++ ) 
		{		
			if ( snt(i) == 1 )
			{
				int t;
				int t1=0;
				int j=i;
				while  ( j>0 )
				{
					t = j % 10;
					if ( snt(t) != 1 ) 
					{
						t1++;
					}
					j = j / 10;
				}
				if ( t1 == 0 ) dem++;
			}
		}
		printf ("%d\n", dem);
	}
	return 0;
}