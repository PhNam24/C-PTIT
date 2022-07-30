#include <stdio.h>
#include <math.h>
#define N 2000000

int a[N+1];
int b[N+1];

int main ()
{
    for ( int i = 0 ; i <= N ; i++ )
    {
        a[i] = 0;
        b[i] = 0;
    }
    a[0] = 1;
    a[1] = 1;
    for ( int i = 2; i <= N / 2 ; i++ )
    {
        if ( a[i] == 0 )
        {
            for ( int j = 2 * i ; j <= N ; j += i )
            {
                a[j] = 1;
                int t = j;
                while ( t % i == 0 )
                {
                    b[j] += i;
                    t = t / i;
                }
            }
        }
    }
    int n;
    scanf ("%d", &n);
    long long sum = 0;
    while ( n-- )
    {
        int m;
        scanf ("%d", &m);
        if ( a[m] == 0 ) sum += m;
        else sum += b[m];
    }
    printf ("%lld", sum);
    return 0;
}