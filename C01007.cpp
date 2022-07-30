#include <stdio.h>

int main () {
	long long a,b;
	scanf ("%lld%lld", &a, &b);
	printf ("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf", a + b , a - b , a * b , a / b , a % b , (double)(a * 1.0 / b * 1.0) );
	return 0;
}