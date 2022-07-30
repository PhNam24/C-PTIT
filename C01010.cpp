#include <stdio.h>

int main () {
	int ngay;
	scanf ("%d", &ngay);
	int ngay1;
	int tuan;
	int nam;
	if ( ngay < 365 ) {
		nam = 0;
		tuan = ngay / 7;
		ngay1 = ngay % 7;
	} else if ( ngay >= 365 ) {
		nam = ngay / 365 ;
		tuan = ( ngay - nam * 365 ) / 7;
		ngay1 = ( ngay - nam * 365 ) % 7;
	}
	printf ("%d %d %d", nam , tuan , ngay1);
	return 0;
}