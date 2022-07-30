#include <stdio.h>
#include <math.h>
 
int main () 
{
	int n;
	scanf ("%d", &n);	
	for ( int i = 1 ; i < 2 * n ; i++ ) 
    {
		for ( int j = 1 ; j < 2 * n ; j++ ) 
        {	
			if ( abs(i-n) > abs(j-n) ) 
				printf ("%d", abs(i-n) + 1);
			else 	 	
				printf ("%d", abs(j-n) + 1);	
		}			 					
		printf ("\n");   
	}                  
	return 0;
}             