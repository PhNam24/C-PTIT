#include <stdio.h>
#include <string.h>

void xoay ( char x[] )
{
    int l = strlen (x);
    char tmp[l];
    for ( int i = 1 ;  i < l ; i++ )
    {
        tmp[i-1] = x[i];
    }
    tmp[l-1] = x[0];
    tmp[l] = '\0';
    strcpy (x , tmp);
}

int check ( char s[] , char x[] )
{
    int l = strlen(s);
    for ( int i = 0 ; i < l ; i++ )
    {
        xoay(x);
        if ( strcmp (x , s) == 0 ) return i + 1;
    }
    return -1;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    char s[n][51];
    int tmp;
    for ( int i = 0 ; i < n ; i++ )
    {
        // scanf ("\n");
        scanf ("%s", s[i]);
    }
    int res = 1e9;
    int c = 0;
    for ( int i = 0 ; i < n ; i++ )
    { 
        int sum = 0;
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( strcmp (s[i] , s[j]) == 0 ) continue;
            int k = strlen(s[i]) , l = strlen(s[j]);
            char a[k] , b[l];
            strcpy(a , s[i]);
            strcpy(b , s[j]);
            tmp = check(a , b);
            if ( tmp == -1 )
            {
                c = 1;
                break;
            }
            else sum += tmp;
        }
        if ( c == 1 ) break;
        if ( res > sum ) res = sum;
    }
    if ( c == 1 ) printf ("-1");
    else printf ("%d", res);
    return 0;
}