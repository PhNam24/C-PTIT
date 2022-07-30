#include <stdio.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while(t--)

int check0 ( char s[] )
{
    int a[5];
    int d = 0;
    for ( int i = 6 ; i < strlen(s) ; i++ )
    {
        if ( i != 9 )
        {
            a[d] = s[i] - '0';
            d++;
        }
    }
    for ( int i = 0 ; i < d - 1 ; i++ )
    {
        if ( a[i] >= a[i+1] ) return 0; 
    }
    return 1;
}

int check ( char s[] )
{
    int l = strlen(s);
    int dem = 0;
    for ( int i = 6 ; i < l ; i++ )
    {
        if ( i != 9 )
        {
            if ( s[i] == '6' || s[i] == '8' ) dem++;
            if ( s[6] == s[7] && s[7] == s[8] && s[10] == s[11] ) return 1;
        }
    }
    if ( check0(s) ) return 1;
    if ( dem == 5 ) return 1;
    return 0;
}

int main ()
{
    test
    {
        scanf ("\n");
        char s[20];
        gets (s);
        if ( check(s) ) printf ("YES");
        else printf ("NO");
        printf ("\n");
    }
    return 0;
}
