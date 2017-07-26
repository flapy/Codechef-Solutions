#include<stdio.h>
int main()
{
	long long int t,p,n,i;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&p);
			if(p>x)
			x=p;
		}
		printf("%lld\n",x);
	}
	return 0;
}
