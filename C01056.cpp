#include <stdio.h>
#include <string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf ("\n");
		char s[20];
		gets(s);
		int test=1;		
		int l=strlen(s);
		for ( int i = 0 ; i<l ; i++ ) {
			for ( int j = i + 1 ; j<l ; j++ ) {
				if (s[i]>s[j]) {
					test = 0 ;
					break;
				}
			}
		}	
		if ( test == 0 ) printf ("NO\n");
		else printf ("YES\n");
	}
	return 0;
}