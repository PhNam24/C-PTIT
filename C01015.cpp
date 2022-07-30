#include <stdio.h>
#include <math.h>

int main () {
	double a , b , c;
	scanf ("%lf%lf%lf", &a, &b , &c);
	double d = b * b - 4 * a * c;
	if ( a == 0 ) 
	{
		if ( b == 0 ) printf ("NO"); 	
		else printf ("%.2lf", -c / b);
	} 
	else 
	{
		if ( d < 0 ) printf ("NO");
		 else if ( d == 0 ) printf ("%.2lf", -b / (2 * a));
		   	  else printf ("%.2lf %.2lf", -b + sqrt(d) / (2 * a) , -b - sqrt(d) / (2 * a));
	}
	return 0;
}