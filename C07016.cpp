#include <stdio.h>
#include <string.h>

struct thisinh {
	int mathisinh;
	char tenthisinh[55];
	char ngaysinh[55];
	double diemthi;
};

int main () {
	int t;
	// t la so thi sinh
	scanf ("%d", &t);
	int stt=1;
	struct thisinh a[1005];
	while (t--) {
		scanf ("\n");
		double diem;	
		gets (a[stt].tenthisinh);
		gets (a[stt].ngaysinh);
		for ( int i=1 ; i<=3 ; i++ ) {
			scanf ("%lf", &diem);
			a[stt].diemthi += diem;
		}
		a[stt].mathisinh = stt;
		stt++;
	}
	a[0].diemthi = 0.0;
	strcpy (a[0].tenthisinh, "");
	strcpy (a[0].ngaysinh, "");
	for ( int i=1 ; i<=stt ; i++ ) {
		for ( int j=i+1 ; j<=stt ; j++ ) {
			if ( a[i].diemthi < a[j].diemthi ) {
				a[0] = a[i];
				a[i] = a[j];
				a[j] = a[0];
			}
		}
	}
	for ( int i=1 ; i<stt; i++ ) {
		printf ("%d %s %s %.1lf\n", a[i].mathisinh , a[i].tenthisinh , a[i].ngaysinh , a[i].diemthi); 
	}
	return 0;
}