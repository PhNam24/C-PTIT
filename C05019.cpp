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

int main () 
{
    int t;
    scanf ("%d", &t);
    int t1 = t;
    while (t--)
    {
        printf ("Test %d:\n", t1 - t);
        long long nt[401];
        int dem = 0;
        long long x = 2;
        while ( dem < 401 )
        {
            if ( snt(x) == 1 )
            {
                nt[dem] = x;
                dem++;
            }
            x++;
        }
        int n;
        scanf ("%d", &n);
        int const m=n;
        int a[n][n];
        int d=0;
        int hang = n-1 , cot = n-1;
        int idx = 0;
        while ( d <= n/2 ) {
            for ( int i=d ; i<=hang ; i++ )
            {
                a[d][i] = nt[idx];
                idx++;
            } 
            for ( int i=d+1 ; i<=cot ; i++ )
            { 
                a[i][cot] = nt[idx];
                idx++;
            }
            for ( int i=cot-1 ; i>=d ; i-- )
            {
                a[hang][i] = nt[idx];
                idx++;
            } 
            for ( int i=hang-1 ; i>d ; i-- ) 
            {
                a[i][d] = nt[idx];
                idx++;
            }
            d++;
            hang--;
            cot--; 
        }
        for ( int i=0 ; i<m ; i++ ) 
        {
            for ( int j=0 ; j<m ; j++ ) 
            {
                printf ("%d ", a[i][j]);
            }
            printf ("\n");
        }
    }
	return 0;
}