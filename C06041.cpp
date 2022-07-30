#include <stdio.h>
#include <string.h>

int main ()
{
    char s[100001];
    scanf ("%s", s);
    int idx = 0;
    int l = strlen(s);
    while ( idx < l )
    {
        char max = s[idx];
        int last = idx;
        for ( int i = idx ; i < l ; i++ )
        {
            if ( max < s[i] ) max = s[i];
        }
        for ( int i = idx ; i < l ; i++ )
        {
            if ( s[i] == max )
            {
                printf ("%c", s[i]);
                last = i;
            }
        }
        idx = last + 1;
    }
    return 0;
}