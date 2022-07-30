#include <stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int chan=0 , le=0;
	int t;
	while (n>0) {
		t = n % 10 ;
		if ( t % 2 == 0  ) chan++;
		else le++;
		n = n / 10; 
	}
	printf ("%d %d", le , chan);
	return 0;
}