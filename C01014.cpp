#include <stdio.h>

int main () {
	double a,b;
	scanf ("%lf%lf", &a, &b);
	if ( a == 0 && b == 0 ) printf ("Vo so nghiem");
	else if ( a == 0 && b != 0 ) printf ("Vo nghiem");
		 else printf ("%.2lf", -b / a);
	return 0; 
}