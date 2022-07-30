#include <stdio.h>
#include <math.h>

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

int b[10]={0};

int main () 
{
    long long n;
    scanf ("%lld", &n);  
    int t;
    while ( n>0 )
    {
        t = n % 10;
        if ( snt(t) == 1 ) b[t]++;
        n = n / 10;     
    }
    for ( int i=0 ; i<10 ; i++ )
    {
       if ( b[i] != 0 ) printf ("%d %d\n", i , b[i]);
    }
    return 0;
}

