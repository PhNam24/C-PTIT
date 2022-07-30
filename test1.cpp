#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void print ( int x , int y )
{
	int *p;
	x = 0;
	p = &x;
	y = *p;
	*p = 1;
	printf ("%d %d", x , y);
}

int main ()
{
	print(1 , 1);
	return 0;
}