#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
//Chirag Agarwal
int main()
{
	long long int n;
	long long int test;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld",&n);
		long long int net=0;
		net=net+((n-1)*(n))/2+2*n;
		printf("%lld\n",net);
	}
	return 0;
}
