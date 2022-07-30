#include <stdio.h>
#include <math.h>
#include <string.h>
 
int snt ( int n ) {
	int m=sqrt(n);
	if (n<2) return 0;
	if (n<=3) return 1; 
	if (n%2==0 || n%3==0) return 0; 
	for ( int i=5 ; i<=m ; i+=6 ) {
		if ( n%i==0 || n%(i+2)==0 ) return 0;
	}
	return 1; 
}

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf ("\n");
		char s[505];
		gets(s);
		int l=strlen(s);
		int test1=0;
		for ( int i=0 ; i<l ; i++ ) {
			if ( snt(s[i]-48) != 1 ) {
				test1++;
				break;
			} 
		}
		if ( test1 != 0 ) printf ("NO");
		else {
				int test2=0;
				for ( int i=0 ; i<l ; i++ ) {
						if ( s[i] != s[l-1-i] ) {
							test2++;
							break;
						}
					}
				if ( test2 == 0 ) printf ("YES");
				else printf ("NO");
			}
		printf ("\n");
	}
	return 0;
}