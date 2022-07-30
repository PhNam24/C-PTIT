#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define test int t; scanf ("%d", &t); while (t--)
 
typedef struct 
{
    char dt[1005];
    int mu;
    int heso;
}dathuc;

int hs[10001];

void tach ( dathuc a )
{
    for ( int i = 0 ; i < strlen(a.dt) ; i++ )
    {
        if ( isdigit(a.dt[i]) )
        {
            a.heso = 0;
            while ( a.dt[i] != '*')
            {
                a.heso = a.heso * 10 + a.dt[i] - '0';
                i++;
            }
            i += 3;
            a.mu = 0;
            while ( isdigit(a.dt[i]) )
            {
                a.mu = a.mu * 10 + a.dt[i] - '0';
                i++;
            }
            hs[a.mu] += a.heso;
        }
    }
}

int main ()
{
    test 
    {
        scanf ("\n");
        for ( int i = 0 ; i < 10001 ; i++ )
        {
            hs[i] = 0;
        }
        dathuc a , b;
        gets (a.dt);
        gets (b.dt);
        tach (a);
        tach (b);
        int dem = 0;
        for ( int i = 0 ; i <= 10000 ; i++ ) 
        {
            if ( hs[i] != 0 ) dem++;
        }
        for ( int i = 10000 ; i >= 0 ; i-- )
        {
            if ( hs[i] != 0 )
            {
                printf ("%d*x^%d" , hs[i] , i);
                dem--;
                if ( dem != 0 ) printf (" + ");
            }
        }
        printf ("\n");
    }
    return 0;
}