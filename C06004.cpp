#include <stdio.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while(t--)

int main ()
{
    char s[100000];
    gets (s);
    int chu = 0 , so = 0 , khac = 0;
    for ( int i = 0 ; i < strlen(s) ; i++ )
    {
        if ( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ) chu++;
        else if ( s[i] >= '0' && s[i] <= '9' ) so++;
             else khac++;
    }
    printf ("%d %d %d", chu , so , khac);
    return 0;
}