#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	char s[55] , s1[10];
	gets (s);
	char* p;
	p=strtok(s," ");
	while ( p != NULL ) {
		strcpy (s1,p);
		s1[0] = tolower(s1[0]);
		printf ("%c",s1[0]);
		p = strtok(NULL, " ");
	}
	int l=strlen(s1);
	for ( int i=1 ; i<l ; i++ ) {
		s1[i] = tolower(s1[i]);
		printf ("%c", s1[i]);
	}
	printf ("@ptit.edu.vn");
	return 0;
}