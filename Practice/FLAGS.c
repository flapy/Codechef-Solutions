#include<stdio.h>
int main()
{
	long long int n;
	long long int t;
	long long int net,flag1,flag2,flag3,flag4,flag5;
	scanf("%lld",&t);
	while(t--)
	{
		net=0;
		scanf("%lld",&n);
		flag1=n*(n-1)*(n-1);
		flag2=n*(n-1)*(n-1);
		flag3=n*(n-1)*(n-2);
		flag4=n*(n-1)*(n-2)*(n-2);
		flag5=n*(n-1)*(n-2)*(n-2);
		net=flag1+flag2+flag3+flag4+flag5;
		printf("%lld\n",net);
	}
	return 0;
}
