//Chirag Agarwal
#include<stdio.h>
int main()
{
	int t,n,i,cnt0;
	double a,sum,dif;
	scanf("%d",&t);
	while(t--)
	{
		cnt0=0;
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a);
			sum+=a;
			if(a==0)
			cnt0++;
		}
		if(sum==100.0)
		printf("YES\n");
		else if(sum<100.0)
		printf("NO\n");
		else
		{
			dif=sum-100.0;
			int net=n-cnt0;
			if(dif/net<1)
			printf("YES\n");
			else 
			printf("NO\n");
		}
	}
	return 0;
}
