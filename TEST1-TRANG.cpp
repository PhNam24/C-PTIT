#include <stdio.h> 
 
int main () 
{
	int n;
	scanf ("%d", &n);
    if ( n == 0 ) printf ("0");
    else
    {
        int dem = 0;
        int a[100];
        for ( int i = 0 ; n > 0 ; i++ ) 
        {
            a[i] = n % 2;
            n = n / 2;
            dem++;
        }
        for ( int i = dem - 1 ; i >= 0 ; i-- ) 
        {
            printf ("%d", a[i]);
        }
    }
	return 0;
}