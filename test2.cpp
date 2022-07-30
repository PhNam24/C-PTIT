#include <stdio.h>
#include <math.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    //freopen ( "intput.txt" , "r" , stdin );
    //freopen ( "output.txt" , "w" , stdout );
    char a[1000];
    gets (a);
    for ( int i = 0 ; i < strlen(a) ; i++ )
    {
        int d = 0;
        for ( int j = 0 ; j < i ; j++ )
        {
            if ( a[j] == a[i] )
            {
                d = 1;
                break;
            }
        }
        if ( d == 0 ) 
        {
            int dem = 0;
            for ( int k = 0 ; k < strlen(a) ; k++ )
            {
                if ( a[i] == a[k] )
                dem++;
            }
            printf ("%c xuat hien %d lan\n", a[i] , dem);
        }
    }
    return 0;
}