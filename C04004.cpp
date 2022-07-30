#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

long long fibo ( int n ) 
{
	long long f0 = 1;
    long long f1 = 1;
    long long fn = 2;
    int i;
    if (n < 0) 
	{
        return -1;
    } 
	else 
	if (n == 0 || n == 1) 
	{
        return n;
    } 
	else 
	{
        for (i = 2; i < n; i++) 
		{
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main () 
{
    test 
    {
    int n;
	scanf("%d",&n);
	printf ("%lld\n", fibo(n-1));		
    }
	return 0;
}