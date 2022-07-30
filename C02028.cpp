#include <stdio.h>
#include<math.h>

int main ()
{
	int n;
	scanf("%d", &n);
	for ( int i = 1 ; i <= n ; i++ ) 
    {
	    int k = i;
	    int l = i - 1;
	    for ( int j = n ; j > i - 1 ; j-- ) 
        {
	        if ( i == 1) printf ("%c",64 + n - j + k);
	        else printf ("%c", 64 + n - j + k + l);
	        k++;
	    }
	    printf ("\n");
	}
	return 0;
}