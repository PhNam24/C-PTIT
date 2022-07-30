#include <stdio.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while(t--)

int main ()
{
    test
    {
        scanf ("\n");
        char s1[201] , s2[201];
        gets (s1);
        gets (s2);
        char s3[201][201] ={""} , s4[201][201] = {""};
        char *p1;
        p1 = strtok ( s1 , " " );
        int d1 = 0;
        while ( p1 != NULL )
        {
            strcat ( s3[d1] , p1 );
            d1++;
            p1 = strtok ( NULL , " ");
        }
        char *p2;
        p2 = strtok ( s2 , " " );
        int d2 = 0;
        while ( p2 != NULL )
        {
            strcat ( s4[d2] , p2 );
            d2++;
            p2 = strtok ( NULL , " ");
        }
        for ( int i = 0 ; i < d1 ; i++ ) 
        {
            for ( int j = 0 ; j < d1 ; j++) 
            {
                if ( strcmp(s3[j - 1], s3[j] ) > 0) 
                {
                    char t[201];
                    strcpy(t, s3[j - 1]);
                    strcpy(s3[j - 1], s3[j]);
                    strcpy(s3[j], t);
                }
            }
        }
        for ( int i = 0 ; i < d2 ; i++ ) 
        {
            for ( int j = 0 ; j < d2 ; j++) 
            {
                if ( strcmp(s4[j - 1], s4[j] ) > 0) 
                {
                    char t[201];
                    strcpy(t, s4[j - 1]);
                    strcpy(s4[j - 1], s4[j]);
                    strcpy(s4[j], t);
                }
            }
        }
        for ( int i = 0 ; i < d1 ; i++ )
        {
            while ( strcmp(s3[i] , s3[i+1]) == 0) i++;
            int check = 0;
            for ( int j = 0 ; j < d2 ; j++ )
            {
                if ( strcmp(s3[i] , s4[j]) == 0 ) 
                {
                    check = 1; 
                    break;
                }
            }
            if ( check == 0 ) printf ("%s ", s3[i]);
        }
        printf ("\n");
    }
    return 0;
}