//Chirag Agarwal
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		int i,a[101],flag=0,ans=0,j;
		for(i=0;i<m;i++)
		scanf("%d",&a[i]);
		int k=pow(2,m);
		for(i=0;i<k;i++)
		{
			int sum=0;
			for(j=0;j<m;j++)
			{
				if(i & (1<<j))
				{
					sum+=a[j];
					if(sum==n)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag)
			{
				ans=1;
				printf("Yes\n");
				break;
			}
		}
		if(!ans)
		printf("No\n");
	}
	return 0;
}
