#include <stdio.h>
#include<math.h>

int main()
{
	int m,n;
	scanf("%d%d", &m, &n);
	for ( int i=1 ; i<=m ; i++ ) 
    {
	    for ( int j=1 ; j<=n ; j++ ) 
        {
	        if ( n>m ) 
            {
	            if ( abs(i-n) > abs(j-n) ) 
				    printf ("%c",abs(i-n)+1+96);
			    else 	 	
				    printf ("%c",abs(j-n)+1+96);
	        } 
            else 
            {
	            if ( abs(i-m) > abs(j-m) ) 
				    printf ("%c",abs(i-m)+1+96);
			    else 	 	
				    printf ("%c",abs(j-m)+1+96);
	        }
	    }
	    printf ("\n");
	}
	return 0;
}