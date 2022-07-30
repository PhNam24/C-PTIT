#include <stdio.h>
#include <math.h>
#define test int t; scanf("%d", &t); while (t--)

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
        int n;
        scanf ("%d", &n);
        for ( int i = 2 ; i <= n / 2 ; i++ )
        {
            if ( snt(i) == 1 ) 
                if ( snt(n - i) == 1 ) printf ("%d %d ", i , n -i);
        }
        printf ("\n");
    }
    return 0;
}