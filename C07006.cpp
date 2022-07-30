#include <stdio.h>
#include <math.h>
#define test int t; scanf ("%d", &t); while (t--)

typedef struct 
{
    double a;
    double b;
}toado;

typedef struct 
{
    toado A;
    toado B;
    toado C;
}tamgiac;

/*void nhaptoado ( toado &A )
{
    scanf ("%lf", &A.a);
    scanf ("%lf", &A.b);
}*/

double khoangcach ( toado A , toado B)
{
    double kc;
    kc = sqrt ((A.a  - B.a)*(A.a  - B.a) + (A.b - B.b)*(A.b - B.b));
    return kc;
}

int main ()
{
    test
    {
        tamgiac tg;
        scanf ("%lf", &tg.A.a);
        scanf ("%lf", &tg.A.b);
        scanf ("%lf", &tg.B.a);
        scanf ("%lf", &tg.B.b);
        scanf ("%lf", &tg.C.a);
        scanf ("%lf", &tg.C.b);
        double AB = khoangcach (tg.A , tg.B);
        double AC = khoangcach (tg.A , tg.C);
        double BC = khoangcach (tg.B , tg.C);
        if ( AB < AC + BC && AC < AB + BC && BC < AB + AC )
        {
            double p = (AB + AC + BC) / 2;
            double dt = sqrt (p * ( p - AB ) * ( p - AC ) * ( p - BC )); 
            printf ("%.2lf", dt);
        }
        else printf ("INVALID");
        printf ("\n");
    }
    return 0;
}