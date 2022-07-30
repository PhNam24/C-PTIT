#include <stdio.h>
#define test int t; scanf ("%d", &t); while (t--)

int UCLN ( int a , int b ) 
{
	while (a!=b) 
	{
		if (a>b) 
			a-=b;
		else 
			b-=a;
	}
	return a;
}

int main () 
{
	test 
	{
		int a , b , c , d;
		scanf ("%d%d%d%d", &a , &b , &c ,&d);
		if ( UCLN(a,b) == UCLN(c,d) ) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}