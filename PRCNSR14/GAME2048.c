#include<stdio.h>
int main()
{
	long long int test,nb;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld",&nb);
		printf("%lld\n",nb-1);
	}
	return 0;
}
