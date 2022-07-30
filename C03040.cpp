#include <stdio.h>
#include <math.h>

int tongchuso ( int n ) 
{
    int t;
    int tong=0;
    while ( n>0 )
    {
        t = n % 10;
        tong += t;
        n = n / 10;
    }
    return tong;
}

int tongthuaso ( int n ) 
{
    int tong=0;
    for(int i = 2; i <= n; i++)
    {   
        while(n % i == 0)
        {
            if ( i < 10 ) tong += i;
            else tong += tongchuso(i);
            n /= i;
        }        
    }
    return tong;
}

int main () 
{
    int n;
    scanf ("%d", &n);
    if ( tongchuso(n) == tongthuaso(n) ) printf ("YES");
    else printf ("NO");
    return 0;
}