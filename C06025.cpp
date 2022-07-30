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
        else if ( l2 < l1 )
             {
                for ( int i = 0 ; i < l1 - l2 ; i++ ) a[i] = '0';
                strcat (a,s2);
                strcpy (b,s1);
             }
             else 
             {
                if ( strcmp (s1,s2) > 0 ) 
                {
                    strcpy (b,s1);
                    strcpy (a,s2);
                }
                else if ( strcmp (s1,s2) < 0 )
                    {
                        strcpy (b,s2);
                        strcpy (a,s1);
                    }
             }
        int l = strlen(a);
        int nho = 0;
        int hieu;
        for ( int i = l - 1 ; i >= 0 ; i-- )
        {
            hieu = b[i] - '0' - ( a[i] - '0') - nho;
            nho = 0;
            if ( hieu < 0 )
            {
                hieu = hieu + 10;
                nho++;
            }
            res[i] = hieu % 10 + '0';
        }
        int j = 0;
        while ( res[j] == '0' ) j++;
        if ( j == strlen(res) ) printf ("0");
        for ( int i = j ; i < strlen(res) ; i++ ) printf ("%c", res[i]);
        printf ("\n");
    }
    return 0;
}