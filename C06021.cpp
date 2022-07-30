#include <stdio.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while(t--)

int check ( char s[] )
{
    for ( int i = 0 ; i < strlen(s) ; i++ )
    {
        if ( s[0] == '0' || s[i] < '0' || s[i] > '9' ) return 0;
    }
    return 1;
} 

int main ()
{
    test
    {
        scanf ("\n");
        char s[1000];
        gets (s);
        if ( check(s) == 0 ) printf ("INVALID");
        else 
        {
            int l = strlen(s);
            int chan = 0 , le = 0; 
            for ( int i = 0 ; i < l ; i++ ) 
            {
                if ( (s[i] - '0') % 2 == 0 ) chan++;
                else le++;
            }
            if ( chan > le ) 
            {
                if ( l % 2 == 0 ) printf ("YES");
                else printf ("NO");
            }
            if ( le > chan )
            {
                if ( l % 2 == 0 ) printf ("NO");
                else printf ("YES");
            }
            if ( chan == le ) printf ("NO");
        }
        printf ("\n");
    }
    return 0;
}