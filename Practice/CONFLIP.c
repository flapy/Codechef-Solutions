#include<stdio.h>
int main()
{
	long long int t,g,n,i,q;
	scanf("%lld",&t);
	while(t--)
	{
		long long int ans;
		scanf("%lld",&g);
		while(g--)
		{
			scanf("%lld %lld %lld",&i,&n,&q);
			if(n%2==0)
			ans=n/2;
			else if(i==q)
			{
				ans=n/2;
			}
			else
			{
				ans=(n+1)/2;
			}
			printf("%lld\n",ans);
		}
	}
	return 0;;
}
