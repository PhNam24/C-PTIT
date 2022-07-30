#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int checktong ( long long n ) 
{
    int t;
    int tong=0;
    while (n>0)
    {
        t= n % 10;
        if ( t == 4 ) return 0;
        tong += t;
        n = n / 10;
    }
    if ( tong % 10 == 0) return 1;
    return 0;
} 

int thuannghich ( int n ) 
{
    int m=n;
    int songuoc=0;
    while (m>0) 
    {
        songuoc = songuoc * 10 + m % 10;
        m = m / 10;
    }
    if ( songuoc == n ) return 1;
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
			if ( thuannghich(i) == 1 && checktong(i) == 1 ) printf ("%d ", i);		
		}
		printf ("\n");
	}
	return 0;
}