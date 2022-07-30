#include <stdio.h>
#include <string.h>

struct sinhvien 
{
	int msv;
	char ten[55];
	double diem1;
	double diem2;
	double diem3;
	double tongdiem;
};

int main () 
{	
	struct sinhvien a[1005];
	int luachon;
	int k;
	int stt=1;
	a[0].diem1 = 0.0;
	a[0].diem2 = 0.0;
	a[0].diem3 = 0.0;
	a[0].tongdiem = 0.0;
	strcpy (a[0].ten, "");
	while (scanf ("%d", &luachon) <3 ) 
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
				a[stt].tongdiem = a[stt].diem1 + a[stt].diem2 + a[stt].diem3; 
				a[stt].msv = stt;
				stt++;				
			}
			printf ("%d\n", t1);
			k=stt;			
		}
		if ( luachon == 2 ) 
		{
			int n;
			scanf ("%d", &n);
			scanf ("\n");
			gets (a[n].ten);
			scanf ("%lf%lf%lf", &a[n].diem1 , &a[n].diem2 , &a[n].diem3);
			a[n].tongdiem = a[n].diem1 + a[n].diem2 + a[n].diem3;
			printf ("%d\n ", n);					
		} 
		if ( luachon == 3 ) 
		{
			for ( int i=1 ; i<k ; i++ ) 
			{
				for ( int j=i+1 ; j<k ; j++ ) 
				{
					if ( a[i].tongdiem > a[j].tongdiem ) 
					{
						a[0] = a[i];
						a[i] = a[j];
						a[j] = a[0];
					}
				}
			}
			for ( int i=1 ; i<k; i++ ) { 
				 printf ("%d %s %.1lf %.1lf %.1lf\n", a[i].msv , a[i].ten , a[i].diem1 , a[i].diem2 , a[i].diem3); 
			}
			break;
		}	
	}
	return 0;
}