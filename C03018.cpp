#include <stdio.h> 
#include <math.h>
 
int fibo ( long long n ) 
{
	long long f1=1;
	long long f2=1;
	long long a=2;
	while (a<n) 
	{
		a=f1+f2;
		f1=f2; 
		f2=a;		
	}
	if (n==a||n==1) return 1;
	else return 0;		
}

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
	int m,n;
	scanf ("%d%d", &m, &n);
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
	for ( int i=a ; i<=b ; i++ ) 
	{
		if ( snt(i) == 1 && fibo(tong(i)) == 1 ) printf ("%d ", i);
	}
	return 0;	
}