#include <stdio.h>
#include <string.h>
 
int main() {
	char s[1005];
	char *t;
	gets(s);
	char save[1005][1005] = {};
	t = strtok(s, " ");
	int i = 0;
	while (t != NULL) {
		int dem=0;
		if (i != 0)
			for (int j = 0; j < i; j++) {
				if (strcmp(save[j], t) == 0)
					dem = 1;
			}
		if (dem == 0) printf("%s ", t);				
		strcpy(save[i], t);
		i++;
		t = strtok(NULL, " ");
	}
	return 0;
}