#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int check ( int n ) 
{
	int t,t1;
	int dem=0;
	int sochuso=0;
	while ( n>0 ) 
	{
		t = n % 10;
		t1 = (n / 10) % 10;
		if ( t < t1 ) dem++;
		n = n / 10;
		sochuso++;
	}
	if ( dem == sochuso - 1 ) return 1;
    return 0;
}

int main () 
{
    test 
    {
    int a,b;
    scanf ("%d%d", &a , &b);
    int dem=0;
    for ( int i=a ; i<=b ; i++ )
    {
        if ( check(i) == 1 ) dem++;
    }
    printf ("%d\n", dem);
    }
    return 0;
}