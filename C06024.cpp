#include <stdio.h>
#include <string.h>
#define ll long long
#define test int t; scanf ("%d", &t); while (t--)

int main ()
{
    test
    {
        scanf ("\n");
        char s1[501] , s2[501];
        gets(s1);
        gets(s2);
        char res[1000] = {""};
        int l1 = strlen(s1) , l2 = strlen(s2);
        char a[500] = {""};
        char b[500] = {""};
        if ( l1 < l2 )
        {
            for ( int i = 0 ; i < l2 - l1 ; i++ ) a[i] = '0';
            strcat (a,s1);
            strcpy (b,s2);
        }
        else 
        {
            for ( int i = 0 ; i < l1 - l2 ; i++ ) a[i] = '0';
            strcat (a,s2);
            strcpy (b,s1);
        }
        int l = strlen(a);
        int nho = 0;
        int tong;
        for ( int i = l - 1 ; i >= 0 ; i-- )
        {
            tong = a[i] + b[i] - 2 * '0' + nho;
            res[i] = tong % 10 + '0';
            nho = tong / 10;
        }
        if ( nho != 0 ) printf ("1");
        printf ("%s", res);
        printf ("\n");
    }
    return 0;
}