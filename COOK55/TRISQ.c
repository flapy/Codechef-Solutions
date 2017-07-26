#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int b;
		scanf("%lld",&b);
		long long int x=b/2-1;
		printf("%lld\n",(x*(x+1))/2);
	}
	return 0;
	
}
