#include <stdio.h>
#include <math.h>
 
int snt ( int n ) 
{
    	int m=sqrt(n);
	if (n<2) return 0;
	if (n<=3) return 1; 
	if (n%2==0 || n%3==0) return 0; 
	for ( int i=5 ; i<=m ; i+=6 ) 
    {
		if ( n%i==0 || n%(i+2)==0 ) return 0;
	}
	return 1; 
}
 
int chuso ( int n) 
{
	int m;
	int tong=0;
	while (n>0) 
    {
		m=n%10;
		if (m!=2 && m!=3 && m!=5 && m!=7 ) return 0;
		n=n/10;
		tong+=m;
	}
	if (snt(tong)==1) return 1;
	else return 0;
}
 
int main () 
{
	int t; 
	scanf ("%d", &t);
	while (t--) 
    {
        long long a , b;
		scanf ("%lld%lld", &a , &b);
        if ( a > b )
        {
            long long t = a;
            a = b;
            b = t;
        }
        int dem = 0;
        for ( int i = a  ; i <= b ; i++ ) 
        {
            if ( snt(i) == 1 && chuso(i) == 1 ) dem++;
        }
        printf ("%d\n", dem);
	}
	return 0;
}