#include <stdio.h>

int check ( long long n ) 
{
	int t,t1;
	int dem=0;
	while ( n>0 ) 
	{
		t = n % 10;
		t1 = (n / 10) % 10;
		if ( t < t1 ) return 0;
		n = n / 10;
	}
    return 1;
}

int main ()
{
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int x;
    int a[100001] , b[100001];
    int d = 0;
    while ( scanf ("%d", &x) != -1 )
    {
            if ( check(x) == 1 )
            {
                a[d] = x;
                b[d] = 1;
                d++;
            }
    }
    for ( int i = 0 ; i < d ; i++ )
    {
        for ( int j = 0 ; j < i ; j++ )
        {
            if ( a[i] == a[j] ) 
            {
                b[j] += b[i];
                b[i] = 0;
            }
        }
    }
    for ( int i = 0 ; i < d ; i++ )
    {
        for ( int j = i + 1 ; j < d ; j++ )
        {
            if ( b[i] < b[j] )
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
    for ( int  i = 0 ; i < d ; i++ )
    {
        if ( b[i] != 0 ) printf ("%d %d\n", a[i] , b[i]);
    }
    return 0;
}