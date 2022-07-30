#include <stdio.h> 
 
int main () {
	int n;
	scanf("%d", &n);
	for ( int i=1; i<=n ; i++ ) {
		int k=i;
		for ( int j=1 ; j<i+1 ; j++ ) {
		 	if ( j==1 ) printf ("%d ",i);
		 	else 
			 printf ("%d ",k);
			 k=k+n-j;
		}		
		printf ("\n");
	}
	return 0;
}