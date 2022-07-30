#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    for ( int i = 0 ; i < n ; i++ )
    {          
         if ( i % 2 == 0) 
        {   
            int d = -1;
            for ( int j = 0 ; j < i + 1 ; j ++ )
            {
                printf ("%d", d+=2);
            }
        }
        else
        {   
            int e = 0;
            for ( int j = 0 ; j < i + 1 ; j ++ )
            {
                printf ("%d", e+=2);
            }
        }
        printf ("\n");
    }
    return 0;
}