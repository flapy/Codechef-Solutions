#include<stdio.h>
int main()
{
	int n,t,min,i,j;
	scanf("%d",&t);
	while(t--)
	{
		int a[51];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		min=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
			min=a[i];
		}
		int flag;
		for(i=min;i>0;i--)
		{
			flag=1;
			for(j=0;j<n;j++)
			{
				if(a[j]%i!=0)
				{
					flag=0;
				}
			}
			if(flag==1)
			{
				break;
			}
		}
		for(j=0;j<n;j++)
		printf("%d ",a[j]/i);
		printf("\n");
	}
	return 0;
}
