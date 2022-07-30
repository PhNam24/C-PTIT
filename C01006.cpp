#include <stdio.h>

int main () {
	int a,b;
	scanf ("%d%d", &a, &b);
	if ( b == 0 ) printf ("0");
	else printf ("%d %d %lld %.2lf %d", a + b , a - b , (long long)(a * b) , (double)(a * 1.0 / b * 1.0) , a % b);
	return 0;
}