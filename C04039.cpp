#include <stdio.h>
#include <math.h>
#define ll long long

int main ()
{
    ll x , y;
    while (scanf ("%lld%lld", &x , &y) != - 1)
    {
        int dem = 0;
        if ( x > y )
        {
            ll t = x; 
            x = y;
            y = t;
        }
        int i = 1;
        double z = 1.0 * ( x + y ) / 2;
        double t = y - z;
        while (x < y)
        {
            x += i;
            dem++;
            if ( x < y )
            {
               x += i;
               dem++;
            }
            i++;
        } 
        printf ("%d", dem);
        printf ("\n");
    }
    return 0;
}