#include <stdio.h>
#define ll long long
int main(){
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	ll a[m][n], b[n][p], c[p][q], d[m][p];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%lld", &a[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++)
			scanf("%lld", &b[i][j]);
	}
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
			scanf("%lld", &c[i][j]);
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			d[i][j]=0;
			for(int k=0;k<n;k++)
			{
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			ll x=0;
			for(int k=0;k<p;k++)
			{
				x+=d[i][k]*c[k][j];
			}
			printf("%d ", x);
		}
		printf("\n");
	}
	return 0;
}
