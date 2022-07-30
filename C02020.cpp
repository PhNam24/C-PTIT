#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    for ( int i = 0 ; i < n ; i++ )
    {   
        for ( int k = n - 1  ; k > i ; k-- ) 
        {
			printf("~");
		}
        int d = 0;   
        for ( int j = 0 ; j < 2 * i + 1 ; j++ )
        {
            if ( j <= i )
            {
                printf ("%d", d += 2 );
            }
            else printf ("%d", d -= 2);
        }
        printf ("\n");
    }
    return 0;
}