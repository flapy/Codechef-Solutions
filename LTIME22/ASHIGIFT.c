#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,b,x_p[100004],y_p[100005],i;
		scanf("%lld",&x);
		scanf("%lld",&b);
		for(i=0;i<b;i++)
		{
			scanf("%lld %lld",&x_p[i],&y_p[i]);
		}
		long long int sum=1;
		for(i=0;i<b;i++)
		{
			sum+=y_p[i];
		}
		long long int c;
		scanf("%lld",&c);
		printf("%lld\n",sum);
	}
	return 0;
}
