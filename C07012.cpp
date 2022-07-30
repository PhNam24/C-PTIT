#include <stdio.h>
#include <string.h>

typedef struct 
{
    int stt ;
    char ten[10000];
    char nhom[10000];
    double mua , ban;
    double lai;
}hang;

int main ()
{
    int n;
    scanf ("%d", &n);
    hang a[n+1];
    for ( int i = 1 ; i <= n ; i++ )
    {
        scanf ("\n");
        gets (a[i].ten);
        scanf ("\n");
        gets (a[i].nhom);
        scanf ("%lf%lf", &a[i].mua , &a[i].ban);
        a[i].lai = a[i].ban - a[i].mua; 
        a[i].stt = i;
    }
    a[0].stt = 0;
    strcpy (a[0].ten, "");
    strcpy (a[0].nhom, "");
    a[0].lai = 0;
    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = i + 1 ; j <= n ; j++ )
        {
            if ( a[i].lai < a[j].lai )
            {
                a[0] = a[i];
                a[i] = a[j];
                a[j] = a[0];
            }
        }
    }
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf ("%d %s %s %.2lf", a[i].stt , a[i].ten , a[i].nhom , a[i].lai);
        printf ("\n");
    }
    return 0;
}
