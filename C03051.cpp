#include <stdio.h>
#include <math.h>
#define test int t; scanf("%d", &t); while (t--)

int chinhphuong( long long n ) 
{
    int a = sqrt(n);
    if(a*a == n)
    	return 1;
    else 
    	return 0;
}

int snt ( long long n ) 
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
        long long l,r;
        scanf ("%lld%lld", &l , &r);
        int dem=0;
        int l1 = sqrt(l);
        int r1 = sqrt(r);
        for ( long long i=l1 ; i<=r1 ; i++ ) 
        {
            if ( snt(i) == 1 ) dem++;
        }
        printf ("%d\n", dem);
    }
    return 0;
}