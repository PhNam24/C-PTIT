#include <stdio.h>

int main () {
	int x1, y1 , x2 , y2 , x3 , y3 , x4 , y4;
    scanf ("%d%d%d%d%d%d%d%d", &x1 ,&y1 ,&x2 ,&y2 ,&x3 ,&y3 ,&x4 ,&y4); 
    int a[4] = {x1 , x2 , x3 , x4};
    int b[4] = {y1 , y2 , y3 , y4};
    int mina = a[0] ,  maxa = a[0] , minb = b[0] , maxb = b[0];
    for ( int i = 0 ; i < 4 ; i++ )
    {
        if ( mina > a[i] ) mina = a[i];
        if ( maxa < a[i] ) maxa = a[i];
        if ( minb > b[i] ) minb = b[i];
        if ( maxb < b[i] ) maxb = b[i];
    }
    int c = maxa - mina;
    int d = maxb - minb;
    if ( c > d ) printf ("%d", c * c);
    else printf ("%d", d * d);
	return 0;
}