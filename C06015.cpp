#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        scanf ("\n");
        char s[85];
        char s1[85][85];
        gets (s);
        char *p;
        p = strtok (s, " ");
        int idx = 0;
        while (p!= NULL)
        {
            strcpy(s1[idx],p);
            for ( int i = 0 ; i < strlen(s1[idx]) ; i++ )
            {
                if ( i == 0 ) s1[idx][0] = toupper(s1[idx][0]);
                else s1[idx][i] = tolower(s1[idx][i]);
            }
            idx++;
            p = strtok(NULL," ");
        }
        for ( int i = 0 ; i < strlen(s1[0]) ; i++ ) s1[0][i] = toupper(s1[0][i]);
        for ( int i = 1 ; i < idx -1 ; i++ )
        {
            printf ("%s ", s1[i]);
        }
        printf ("%s, %s", s1[idx-1] , s1[0]);
        printf ("\n");
    }
    return 0;
}