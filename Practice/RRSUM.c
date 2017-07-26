#include<stdio.h>
int main()
{
	long long int m,n,q,avg,ans,net;
	scanf("%lld %lld",&n,&m);
	while(m--)
	{
		scanf("%lld",&q);
		avg=(n+2+3*n)/2;
		if(q>3*n || q<n+2)
		net=0;
		else
		{
			if(q==avg)
			net=n;
			else if(q<avg)
			{
				ans=avg-q;
				net=n-ans;
			}
			else
			{
				ans=q-avg;
				net=n-ans;
			}
		}
		printf("%lld\n",net);
	}
	return 0;
}
