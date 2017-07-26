#include<stdio.h>
int main()
{
	long long int t,a,xor;
	scanf("%lld",&t);
	while(t--)
	{
		long long int i,cnt=0,x;
		for(i=0;i<15;i++)
		{
			scanf("%lld",&a);
			if(i==0)
			{
				xor=a;
				continue;
			}
			xor=xor^a;
		//	printf("%lld\n",xor);
		}
		//printf("%lld\n",xor);
		scanf("%lld",&x);
		for(i=0;i<32;i++)
		{
			if(xor & 1<<i)
			cnt++;
		}
		//printf("%lld\n",cnt);
		if(cnt>x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
