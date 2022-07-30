#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    test
    {
        int n = 0;
        char c =' ';
        int chan = 0 , le = 0;
        while ( c == ' ' )
        {
            int a;
            scanf ("%d", &a);
            if ( a % 2 == 0 ) chan ++;
            else le++;
            n++;
            c = getchar(); 
        }
        if ( (n % 2 == 0 && chan > le ) || ( n % 2 != 0 && le > chan ) ) printf ("YES");
        else printf ("NO");
        printf ("\n");
    }
    return 0;
}