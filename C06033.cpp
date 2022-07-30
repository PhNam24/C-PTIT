#include <stdio.h>
#include <string.h>

void tron ( char s1[] , char s2[] , char s12[] , int n )
{
    int d = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        s12[d] = s2[i];
        d++;
        s12[d] = s1[i];
        d++;
    }
    s12[d] = '\0';
}

void tach ( char s1[] , char s2[] , char s12[] , int n )
{
    int d = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        s1[i] = s12[d];
        d++;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        s2[i] = s12[d];
        d++;
    }
}

int main ()
{
    int n;
    while (scanf ("%d", &n) != -1)
    {
        if ( n == 0 ) break;
        int dem = 0;
        char s1[n] , s2[n] , s12[2*n+1] , s[2*n+1];
        scanf ("%s%s%s", s1 , s2 , s12);
        char s11[n] , s22[n];
        strcpy (s11 , s1);
        strcpy (s22 , s2);
        while (1)
        {
            dem++;
            tron ( s1 , s2 , s , n );
            if ( strcmp(s12 , s) == 0 )
            {
                printf ("%d", dem);
                break;
            }
            tach ( s1 , s2 , s , n );
            if ( strcmp(s1 , s11) == 0 && strcmp(s2 ,s22) == 0   ) 
            {
                printf ("-1");
                break;
            }
        }
        printf ("\n");
    }
    return 0;
}