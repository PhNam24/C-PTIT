#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		double m=(1.0/n);
		printf ("%.15lf\n", m);
	}
	return 0;
}