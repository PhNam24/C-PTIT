#include <stdio.h>
 
int main() {
	int h;
	scanf("%d", &h);
	int n=1;
	for (int i = 0; i < h; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j <= i; j++) {
				printf("%c ", n+96);
				n++;
			}
			printf("\n");
		}
		else {
			n += i;
			for (int j = 0; j <= i; j++) {
				printf("%c ", n+96);
				n--;
			}
			printf("\n");
			n += i + 2;
		}
	}
    return 0;
}