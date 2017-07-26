#include<stdio.h>
int main()
{
	long long int a[100000],i,j,n,ans;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i==0 && j==1)
			{
				ans=a[i]&a[j];
			}
			else
			{
				if((a[i]&a[j])>ans)
				ans=a[i]&a[j];
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
