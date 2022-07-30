#include <stdio.h>
#include <string.h>

int main ()
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        scanf ("\n");
        char s[100001];
        gets (s);
        int d = 0;
        for ( int i = 0 ; i < strlen(s) ; i++)
        {
            if ( s[i] == s[strlen(s) - 1 -i] ) d++;
        }
        if ( d == strlen(s) - 2 || ( d == strlen(s) && strlen(s) % 2 != 0 ) ) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}
