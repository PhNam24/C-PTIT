#include <stdio.h> 
 
int main () 
{
	int a,b;
	scanf ("%d%d", &a, &b);
	for ( int i=1 ; i<=a ; i++ ) 
    {
		for ( int j=1 ; j<=b ; j++ )
        {
			if ( i==j ) 
				printf ("1");
			else  
				if (i>j) 
					printf ("%d",i-j+1);
			 	else 
					printf ("%d",j-i+1);			
		}
		printf ("\n");
	} 
	return 0;
}