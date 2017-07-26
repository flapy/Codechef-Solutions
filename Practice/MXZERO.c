#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int cnt0=0,cnt1=0,i;
		int n,a;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(!a)
			cnt0++;
			else
			cnt1++;
		}
		int ans=0;
		if(cnt1%2!=0)
		{
			ans+=cnt1;
		}
		else
		{
			ans+=cnt0;
		}
		printf("%d\n",ans);
	}
	return 0;
}
