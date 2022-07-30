#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define test int t; scanf ("%d", &t); while(t--)

int check ( char s1[] , char s2[] )
{
    for ( int i = 0 ; i < strlen(s1) ; i++ ) s1[i] = tolower(s1[i]);
    for ( int i = 0 ; i < strlen(s2) ; i++ ) s2[i] = tolower(s2[i]);
    if ( strcmp (s1 , s2) != 0 ) return 1;
    return 0; 
}

int main ()
{
    int t; 
    scanf ("%d", &t); 
    int t1 = t;
    while(t--)
    {
        printf ("Test %d: " , t1 - t);
        scanf ("\n");
        char s1[201] , s2[20];
        char s3[201][201] = {""} , s4[201][201] = {""} ;
        gets (s1);
        gets (s2);
        char *p;
        p = strtok ( s1 , " ");
        int d = 0;
        while ( p != NULL )
        {
            strcat ( s3[d] , p );
            strcat ( s4[d] , p );
            d++;
            p = strtok (NULL , " ");
        }
        for ( int i = 0 ; i < d ; i++ )
        {
            if ( check(s2 , s3[i]) ) printf ("%s ", s4[i]);
        }
        printf ("\n");
    }
    return 0;
}