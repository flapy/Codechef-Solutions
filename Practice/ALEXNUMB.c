#include<stdio.h>
int main()
{
	long long int t,n,x,p;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		p=n;
		while(p--)
		scanf("%lld",&x);
		printf("%lld\n",n*(n-1)/2);
	}
	return 0;
}
