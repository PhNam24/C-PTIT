#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if (m>=n)
    {
		int c=1,d=1,p=m;
		for (int i=0;i<n;i++)
        {
			for (int j=0;j<m-i;j++)
            {
				printf("%d",c+j);
			}
			for (int k=0;k<m-p;k++)
            {
				printf("%d",m-k-1);
			}
			p--;
			c++;
			printf("\n");
		}
	}
	else
    {
		int c=1,p=m;
		for (int i=0;i<m;i++)
        {
			for (int j=0;j<m-i;j++)
            {
				printf("%d",c+j);
			}
			for (int k=0;k<m-p;k++)
            {
				printf("%d",m-k-1);
			}
			p--;
			c++;
			printf("\n");
		}
        for (int i=1;i<=n-m;i++)
        {
			printf("%d",c+i-1);
		    for (int j=1;j<m;j++)
            {
		    	printf("%d",c+i-j-1);
			}	
			printf("\n");
        }
    }
    return 0;
}
    