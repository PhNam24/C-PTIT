#include <stdio.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while(t--)

int main ()
{
    test
    {
        scanf ("\n");
        char s[550];
        gets (s);
        int t1 = 0 , t2 = 0;
        for ( int i = 0 ; i < strlen(s) ; i++ )
        {
            if ( s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8' ) t1++;
            if ( s[i] == s[strlen(s) - 1 - i] ) t2++;
        }
        if ( t1 == strlen(s) && t2 == strlen(s) ) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}