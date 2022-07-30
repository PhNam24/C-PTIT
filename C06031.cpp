#include <stdio.h>
#include <string.h>

int max ( int a , int b )
{
    if ( a > b ) return a;
    return b;
}

int main ()
{
    char s[51];
    scanf ("%s", s);
    int l = strlen(s);
    int a[l];
    for ( int i = 0 ; i < l ; i++ )
    {
        a[i] = 1;
    } 
    int res = 0;
    for ( int i = 0 ; i < l ; i++ )
    {
        for ( int j = 0 ; j < i ; j++ )
        {   
            if ( s[i] > s[j] ) a[i] = max ( a[i] , a[j] + 1);
        }
        if ( res < a[i] ) res = a[i];
    }
    printf ("%d", 26 - res);
    return 0;
}