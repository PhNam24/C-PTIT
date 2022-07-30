#include <stdio.h>
 
int main () {
	int n,m;
	scanf ("%d%d", &n, &m);
	for ( int i=0 ; i<n ; i++ ) 
	{
		for ( int k=0 ; k<i ; k++) 
		{
			printf ("~");
		}
		for ( int j=0 ; j<m ; j++ ) 
		{
			if ( i == 0 || i == n-1 )  printf ("*");
			else if ( j == 0 || j == m-1 ) printf ("*");
				 else printf (".");			
		}
		printf ("\n");
	}
	return 0;
}