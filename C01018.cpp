#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) 
	{
		int n;
		scanf ("%d", &n);
		int m = sqrt(n);
		if ( m * m == n ) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}