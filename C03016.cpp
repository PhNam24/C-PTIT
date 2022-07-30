#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main () 
{
    test 
    {
        long long n;
        scanf("%lld",&n);
        long long f1 = 1;
        long long f2 = 1;
        long long a = 2;
        while ( a < n ) {
            a = f1 + f2;
            f1 = f2; 
            f2 = a;		
        }
        if ( n == a || n == 1 || n == 0 ) printf ("YES");
        else printf ("NO");	
        printf ("\n");
    }		
	return 0;
}