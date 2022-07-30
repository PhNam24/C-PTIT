#include <stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	for ( int i = 1 ; i <= n ; i++ ) 
    {
	    for ( int j = n ; j > i - 1 ; j-- ) 
        {
	        printf ("%c",2 * n - j - i + 64);
	    }
	    printf ("\n");
	}
	return 0;
}