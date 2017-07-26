#include<stdio.h>
int main()
{
	//your code goes here
	int a[103],n,t,k;
	scanf("%d",&t);
	while(t--)
	{
		int j,even=0,odd=0,flag=0,tru=0;
		scanf("%d %d",&n,&k);
		for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		for(j=0;j<n;j++)
		{
			if((a[j]%2)==0)
			even++;
			else
			flag=1;
			if(even==k)
			{
				tru=1;
				break;
			}
		}
		if(k==0 && flag==1)
		printf("YES\n");
		else if(tru==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
