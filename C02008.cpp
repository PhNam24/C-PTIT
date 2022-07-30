#include <stdio.h>

int main () 
{
	int h;
	scanf ("%d", &h);
	for ( int i=0 ; i<h ; i++ ) 
	{
		for ( int j=0 ; j<i+1 ; j++ ) 
		{
			if ( i == 0 || i == h-1 || j == 0 || j == i )printf ("*");
			else printf (".");
		}
		printf ("\n");
	}
	printf ("\n");
	return 0;	
}