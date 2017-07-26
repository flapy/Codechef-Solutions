#include<stdio.h>
int main()
{
	long long int t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		long long int ans,p;
		if(n==0 && k==0)
		{
			printf("0 0\n");
		}
		else if(k==0)
		{
			printf("0 %d\n",n);
		}
		else
		{
			ans=n/k;
			p=n-ans*k;
			printf("%lld %lld\n",ans,p);
		}
	}
	return 0;
}
