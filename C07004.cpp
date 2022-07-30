#include <stdio.h>
#include <string.h>

typedef struct 
{
    int tu;
    int mau;
}ps;

int gcd (int a, int b)
{
    while ( a * b != 0)
    { 
        if ( a > b ) a %= b; 
        else b %= a;  
    }
    return a + b;
}

int lcm ( int a , int b)
{
    return a * b / gcd(a , b);
}

int main ()
{
    int t;
    scanf ("%d", &t);
    int t1 = t;
    while (t--)
    {
        printf ("Case #%d:\n", t1 - t);
        ps a , b;
        scanf ("%d%d%d%d", &a.tu , &a.mau , &b.tu , &b.mau);
        int a1 = gcd(a.tu , a.mau);
        int b1 = gcd(b.tu , b.mau);
        // rut gon
        a.tu = a.tu / a1;
        a.mau = a.mau / a1;
        b.tu = b.tu / b1;
        b.mau = b.mau / b1;
        // quy dong
        printf ("%d/%d %d/%d\n", a.tu * lcm(a.mau , b.mau) / a.mau , lcm(a.mau , b.mau) , b.tu * lcm(a.mau , b.mau) / b.mau , lcm (a.mau , b.mau));
        ps c;
        // tong
        c.tu = b.tu * a.mau + a.tu * b.mau;
        c.mau = b.mau * a.mau;
        printf ("%d/%d\n", c.tu / gcd(c.tu , c.mau) , c.mau / gcd (c.tu , c.mau));
        // tich
        c.tu = a.tu * b.mau;
        c.mau = a.mau * b.tu;
        printf ("%d/%d\n", c.tu / gcd(c.tu , c.mau) , c.mau / gcd (c.tu , c.mau));
        printf ("\n");
    }
    return 0;
}
