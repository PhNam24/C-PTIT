#include <stdio.h>
#include <math.h>

typedef struct 
{
    int stt;
    char ten[10000];
    char ngaySinh[10000];
    double diem1 , diem2 , diem3;
    double tong;
}thiSinh;

int main ()
{
    int n;
    scanf ("%d", &n);
    thiSinh a[n];
    double max = -1;
    for ( int i = 0 ; i < n ; i++ )
    { 
        scanf ("\n");
        gets (a[i].ten);
        scanf ("%s", a[i].ngaySinh);
        scanf ("%lf%lf%lf", &a[i].diem1 ,&a[i].diem2 , &a[i].diem3);
        a[i].tong = a[i].diem1 + a[i].diem2 + a[i].diem3;
        if ( max < a[i].tong ) max = a[i].tong;
        a[i].stt = i + 1;
    }
    for ( int i = 0 ; i < n ; i++ ) 
    {
        if ( a[i].tong == max )  printf ("%d %s %s %.1lf", a[i].stt , a[i].ten , a[i].ngaySinh , a[i].tong);
        printf ("\n");
    }
    return 0;
}