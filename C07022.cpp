#include <stdio.h>
#include <string.h>

typedef struct 
{
	int msv;
	char ten[55];
	double diem1;
	double diem2;
	double diem3;
}sinhvien;

int check ( sinhvien a )
{
    if ( a.diem1 > a.diem2 || a.diem1 > a.diem3 || a.diem2 > a.diem3 ) return 0;
    return 1;
}

int main () 
{	
	sinhvien a[1005];
	int luachon;
	int stt = 1;
	while (scanf ("%d", &luachon) < 3 ) 
	{
		
		if ( luachon == 1 ) 
		{
			int t;
			scanf ("%d", &t);
			int const t1=t;			
			while (t--) 
			{
				scanf ("\n");	
				gets (a[stt].ten);
				scanf ("%lf%lf%lf", &a[stt].diem1 , &a[stt].diem2 , &a[stt].diem3);
				a[stt].msv = stt;
				stt++;				
			}
			printf ("%d\n", t1);		
		}
		if ( luachon == 2 ) 
		{
			int n;
			scanf ("%d", &n);
			scanf ("\n");
			gets (a[n].ten);
			scanf ("%lf%lf%lf", &a[n].diem1 , &a[n].diem2 , &a[n].diem3);
			printf ("%d\n ", n);					
		} 
		if ( luachon == 3 ) 
		{
			for ( int i = 1 ; i < stt ; i++ ) 
            { 
				if ( check(a[i]) == 1 ) printf ("%d %s %.1lf %.1lf %.1lf\n", a[i].msv , a[i].ten , a[i].diem1 , a[i].diem2 , a[i].diem3); 
			}
			break;
		}	
	}
	return 0;
}