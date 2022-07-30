#include <stdio.h>
 
int main () 
{
	int n;
	scanf ("%d", &n);
	int a[n][n];
	for ( int i = 0 ; i < n ; i++ ) 
    {
		for ( int j = 0 ; j < n ; j++ ) 
        {
			scanf ("%d", &a[i][j]);
		}
	}
	for ( int i = 0 ; i < n ; i++ ) 
    {
		for ( int j = 0 ; j < n ; j++ ) 
        {
			if ( i == j ) {
				int t = a[i][j];
				a[i][j] = a[i][n-1-j];
				a[i][n-1-j] = t;
			}
		}
	}
	for ( int i = 0 ; i < n ; i++ ) 
    {
		for ( int j = 0 ; j < n ; j++ ) 
        {
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}