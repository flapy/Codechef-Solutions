#include<stdio.h>
int main()
{
	int test,n,m,a[1000],i;
	scanf("%d",&test);
	while(test--)
	{
		int max=0,net=0,sum=0;
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max)
			max=a[i];
		}
		int flag=0;
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				flag=1;
				break;
			}
		}
		//printf(" max=%lld\n",max);
		if(flag==1)
		{
			for(i=0;i<n;i++)
			{
				sum+=max-a[i];
				a[i]=max;
				//printf(" max net =%lld \n",net);
			}
			//printf("sum = %lld\n",sum);
			if(sum>m)
			{
				printf("No\n");
			}
			else
			{
				if((-sum+m)%n==0)
					printf("Yes\n");
				else
					printf("No\n");
			}
		}
		else
		{
			if(m%n==0)
			{
					printf("Yes\n");
			}
			else
				printf("No\n");
		}
	}
	return 0;
}
