#include <stdio.h>
#include <string.h>

int main () {
	char s[10];
	gets(s);
	int l=strlen(s);
	for ( int i=0 ; i<l ; i++ ) {
		if ( i == 0 ) {
			if ( s[l-1] != '0' ) printf ("%c", s[l-1]);
		} 
		else if ( i == l-1 ) printf ("%c", s[0]);
			 else printf ("%c", s[i]);
	}
	return 0;
}