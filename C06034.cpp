#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main () 
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        scanf ("\n");
        char s[100];
        gets(s);
        int a[100];
        int l = strlen(s);
        for ( int i = 0  ; i < l ; i++ ) 
        {
            if ( s[i] == 'I' ) a[i] = 1;
            if ( s[i] == 'V' ) a[i] = 5;
            if ( s[i] == 'X' ) a[i] = 10;
            if ( s[i] == 'L' ) a[i] = 50;
            if ( s[i] == 'C' ) a[i] = 100;
            if ( s[i] == 'D' ) a[i] = 500;
            if ( s[i] == 'M' ) a[i] = 1000;
        } 
        int k = a[l-1];
        for ( int i = l - 1 ; i > 0 ; i-- ) 
        {
            if ( a[i] <= a[i-1] ) k = k + a[i-1];
		    else k = k - a[i-1] ;   
        }
        printf ("%d", k);
        printf ("\n");
    }
	return 0;
}