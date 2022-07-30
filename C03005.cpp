#include <stdio.h>

int main () 
{
	int a,b;
	scanf ("%d%d", &a, &b);
	for ( int i=a ; i<b ; i++ ) 
	{
		for ( int j=a+1 ; j<=b ; j++ ) 
		{
			int dem=0;
			for ( int k=1 ; k<=b/2 ; k++ ) 
			{
				if ( i % k == 0 && j % k == 0 ) 
				{
					dem++;
				}
			}
			if ( dem == 1 && i < j ) printf ("(%d,%d)\n", i , j);
		}
	}
	return 0;
}