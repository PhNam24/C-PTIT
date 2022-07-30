#include <stdio.h>
#include <math.h>

int tong ( int n ) 
{
	int tong=0;
	while (n>0)
	{
		tong = tong + n % 10;
		n = n / 10;
	}
	return tong;
}

int main () 
{
	int a,b;
	scanf ("%d%d", &a , &b);
	if ( tong(a) <= tong(b) ) printf ("%d %d", a , b);
	else printf ("%d %d", b , a);
	return 0;	
}