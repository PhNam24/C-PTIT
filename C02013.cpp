#include <math.h>
#include <stdio.h> 

 
int main () 
{
	int m,n;
	scanf ("%d%d", &m, &n);
	int a,b;
	if (m>=n) 
    {
		if (m%2==0) 
        {
			a=m/2;
			b=m-a-1;
		} 
        else 
        {
			a=(int)m/2+1;
			b=m-a;
		}
		for ( int i=m ; i>=a ; i-- ) 
        {
		    for ( int j=1 ; j<=n ; j++ ) 
            {
				printf ("%d",abs(i-j)+1);	
			}
			printf ("\n");
		}
		for ( int i=b ; i>=1 ; i--) 
        {
			for ( int j=1 ; j<=n ; j++ ) 
            {
				printf ("%d",abs(i-j)+1);
			}
			printf ("\n");
		}
	} 
    else 
    {
		if (n%2==0) a=n/2;
		else a=(int)n/2+1;
		for ( int i=1 ; i<=m ; i++ ) 
        {
			for ( int j=n ; j>=a ; j--) 
            {
				printf ("%d",abs(i-j)+1);
			}
			if (n%2!=0) 
            {
				a=(int)n/2+1;
				b=n-a;
			} 
            else 
            {
				a=n/2;
				b=n-a-1;
			}
			for ( int j=b ; j>=1 ; j--) 
            {
					printf ("%d",abs(i-j)+1);
			}
			printf ("\n");
		}
	}
	return 0;
}