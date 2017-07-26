#include<stdio.h>
int main()
{
	int k,n,test,j,flag;
	scanf("%d",&test);
	while(test--)
	{
		int net=0;
;		scanf("%d",&n);
		for(j=25;j<=n;j++)
		{
			flag=prime(j);
			if(flag==0)
			{
				net+=j;
			}
		}
		printf("%d\n",net);
	}
	return 0;
}
int prime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return (flag);
}
