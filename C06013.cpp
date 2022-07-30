#include <stdio.h>
#include <string.h>

int main ()
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        scanf ("\n");
        char s[1005];
        gets(s);
        int b[10];
        int test1 = 0;
        for ( int i = 0 ; i < 10 ; i++ ) b[i] = 0;
        for ( int i = 0 ; i < strlen(s) ; i++)
        {
            if ( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[0] == '0')
            {
                test1 = -1;
                break;
            }
            if ( s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
            {
                b[s[i] - '0']++;
            }
        }
        int test = 0;
        for ( int i = 0 ; i < 10 ; i++ )
        {
            if ( b[i] == 0 ) 
            {
                test = 1;
                break;
            }
        }
        if ( test1 == -1 ) printf ("INVALID\n");
        else if ( test == 0 ) printf ("YES\n");
             else printf ("NO\n");
    }
    return 0;
}