#include <stdio.h>

int main() {
	int n;
    scanf ("%d",&n);
    int a[n] , b[n];
    for (int i  =0 ; i < n ; i++)
    { 
        scanf ("%d",&a[i]);
        scanf ("%d",&b[i]);
    }
    for( int i = 0; i < n - 1; i++ ){
            for( int j = i + 1; j < n; j++ )
            {
                if ( a[i] > a[j] )
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;  
                    int t1 = b[i];
                    b[i] = b[j];
                    b[j] = t1; 
                }
            }
        }
    int kq = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( kq <= a[i]) kq = a[i] + b[i];
        else kq = kq + b[i];
    }
    printf ("%d",kq);
	return 0;
}