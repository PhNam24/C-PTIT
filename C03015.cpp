#include<stdio.h>
#include<math.h>
#define test int t; scanf("%d", &t); while (t--)

int main()
{
	test
	{
		long long n;
		scanf("%lld", &n);
		long long i = 2;
		for ( ; i <= sqrt(n) ; i++ )
		{
			if (n % i == 0)
			{
                while (n % i == 0)
				{
                    n = n / i;
                }
            }
		}
		if (n != 1)
			printf("%lld\n", n);
		else
			printf("%lld\n", i-1);
	}
	return 0;
}