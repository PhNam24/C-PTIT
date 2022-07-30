#include<stdio.h>
#include<math.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
		//sort
		qsort(a,n,sizeof(int),cmp);
		//
		int min = 1e9 , cnt = 1;
		for (int i = 0 ; i < n-1 ; i++)
		{
			if (a[i+1] - a[i] < min ) 
			{
				min = a[i+1] - a[i];
				cnt = 1;
			}
			else if (a[i+1] - a[i] == min) cnt++;
		}
		printf("%d %d\n",min,cnt);
	}
	return 0;
}
