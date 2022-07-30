#include <stdio.h>
#include <string.h>
 
int main () {
	char s1[10005], s2[10005];
	gets (s1);
	gets (s2);
	char *p;
	p=strtok (s1," ");
	while(p != NULL ) {
      if (strcmp(p,s2)!=0) printf ("%s ",p);
      p = strtok(NULL, " ");
   }	
	return 0;
}