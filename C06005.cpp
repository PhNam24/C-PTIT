#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main ()
{
    char s[10000];
    gets (s);
    int l = strlen(s);
    for ( int i = 0 ; i < l ; i++ )
    {
        s[i] = tolower(s[i]);
    }
    char s1[1000][1000] = {""};
    int dem[1000] = {};
    char *p;
    p = strtok ( s , " " );
    int d = 0;
    while ( p != NULL )
    {
        strcat ( s1[d] , p );
        dem[d]++;
        d++;
        p = strtok ( NULL , " ");
    }
    for ( int i = 0 ; i < d ; i++ )
    {
        for ( int j = 0 ; j < i ; j++ )
        {
            if ( strcmp ( s1[j] , s1[i] ) == 0 )    
            {
                dem[j] += dem[i];
                dem[i] = 0;
            }
        }
    }
    for ( int i = 0 ; i < d ; i++ )
    {
        if ( dem[i] != 0 ) printf ("%s %d\n", s1[i] , dem[i]);
    }
    return 0;
}