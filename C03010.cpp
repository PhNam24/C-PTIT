#include <stdio.h>

int giaithua ( int n ) 
{
	if ( n == 0 ) return 1;
	else if ( n == 1 ) return 1;
		 else return n * giaithua (n - 1);
} 

int strong ( int n ) 
{
	int tong=0;
	int t;
	int const m=n;
	while (n>0) {
		t = n % 10;
		tong = tong + giaithua(t);
		n = n / 10;
	}
	if ( tong == m ) return 1;
	else return 0;
}

int main () {
	int m,n;	
	scanf ("%d%d", &m , &n);
	int a,b;
	if ( m<n ) 
	{
		a=m;
		b=n;
	}
	else 
	{
		a=n;
		b=m;
	}
	int const p=b;
	for ( int i=1 ; i<=p ; i++ ) 
	{
		if ( strong(i) == 1 ) printf ("%d ", i);
	}
	return 0;
}