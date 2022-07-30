#include <stdio.h>
#include <string.h>

typedef struct 
{
    char ten[1000];
    int k;
    int m;
    int da;
    int tienhoa;
}pokemon;

int main ()
{
    int n;
    scanf ("%d", &n);
    pokemon p[n];
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ("%s", p[i].ten);
        scanf ("%d%d", &p[i].k , &p[i].m);
        p[i].tienhoa = p[i].m / p[i].k;
        p[i].da = p[i].m - p[i].tienhoa * p[i].k + 2 * p[i].tienhoa;
        while ( p[i].da >= p[i].k )
        {
            p[i].tienhoa++;
            p[i].da = p[i].da - p[i].k + 2;
        }
    }
    int max = -1;
    int idx;
    int dem = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        dem += p[i].tienhoa;
        if ( max < p[i].tienhoa )
        {
            max = p[i].tienhoa;
            idx = i;
        }
    }
    printf ("%d\n%s", dem , p[idx].ten);
    return 0;
}
