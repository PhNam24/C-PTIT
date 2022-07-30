#include <stdio.h>
#include <string.h>

typedef struct 
{
    char s[1000];
    int l;
    int dem;
}xau;

int check ( char s[] )
{
    int d = 0;
    for ( int i = 0 ; i < strlen(s) ; i++)
    {
        if ( s[i] == s[strlen(s) - 1 -i] ) d++;
    }
    if ( d == strlen(s) ) return 1;
    return 0;
}

int find ( xau a[] , char s[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( strcmp (a[i].s , s) == 0 ) return i;
    }
    return -1;
}

int main ()
{
    char x[1000];
    xau a[1005];
    int d = 0;
    while ( scanf ("%s", x) != -1 )
    {
        if ( check(x) == 1) 
        {
            int t = find ( a , x , d );
            if ( t != -1 )
            {
                a[t].dem++;
            }
            else
            {
                strcpy (a[d].s , x);
                a[d].l = strlen(x);
                a[d].dem++;
                d++;
            }
        }
    }
    int max = -1e9;
    for ( int i = 0 ; i < d ; i++ )
    {
       if ( max < a[i].l ) max = a[i].l;
    }
    for ( int i = 0 ; i < d ; i++ )
    {
        if ( a[i].l == max ) printf ("%s %d\n", a[i].s , a[i].dem);
    }
    return 0;
}
