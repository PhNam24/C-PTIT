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
            t1 = t1 + s[i] - '0';
            if ( s[i] == s[strlen(s) - 1 - i] ) t2++;
        }
        if ( t1 % 10 == 0 && t2 == strlen(s) && s[0] == '8' && s[strlen(s) - 1] == '8') printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}