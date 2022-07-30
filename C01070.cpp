#include <stdio.h> 
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)


int chinhphuong ( int n ) 
{
    int m = sqrt (n);
    if ( m * m == n ) return 1;
    return 0;
}

void swap ( int *a , int *b )
{
    int t = *a; 
    *a = *b; 
    *b = t;
}

int main ()
{
    // c =  cao , r = tong
    int r1 , c1 , r2 , c2 , r3 , c3;
    scanf ("%d%d%d%d%d%d", &r1 , &c1 , &r2 , &c2 , &r3 , &c3);
    if ( r1 > c1 ) swap ( &r1 , &c1 );
    if ( r2 > c2 ) swap ( &r2 , &c2 );
    if ( r3 > c3 ) swap ( &r3 , &c3 );
    // dt=dien tich
    int dt1 = r1 * c1;
    int dt2 = r2 * c2;
    int dt3 = r3 * c3;
    int dt = dt1 + dt2 + dt3;
    if ( chinhphuong (dt) == 0 ) printf ("NO");
    else 
    {
        int t = sqrt(dt);
        if ( c1 == c2 && c2 == c3 && c1 == t ) printf ("YES");
        else 
        {
            if ( c2 == t ) 
            {
                swap ( &r1 , &r2 );
                swap ( &c1 , &c2 );
            }
            if ( c3 == t )
            {
                swap ( &r1 , &r3 );
                swap ( &c1 , &c3 );
            }
            if ( c1 == t )
            {
                r1 = t - r1;
                if ( ( r2 == r1 && r3 == r1 ) || ( c2 == r1 && r3 == r1 )|| ( r2 == r1 && c3 == r1 ) || ( c2 == r1 && c3 == r1 ) ) printf ("YES");
                else printf ("NO");
            }
            else printf ("NO");
        }
    }
    return 0;
}