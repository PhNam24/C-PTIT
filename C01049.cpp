#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		int chan=0 , le=0;
		int m;
		while (n>0) {
			m = n % 10 ;
			if ( m % 2 == 0  ) chan++;
			else le++;
			n = n / 10; 
		}
		printf ("%d %d", le , chan);
		printf ("\n");
	}
	return 0;
}