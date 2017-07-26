#include<stdio.h>
int main()
{
	long long int c;
	int t,n,a;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		scanf("%d %lld",&n,&c);
		while(n--)
		{
			scanf("%d",&a);
			sum+=a;
		}
		if(sum<=c)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
