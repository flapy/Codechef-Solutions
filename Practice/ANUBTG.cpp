#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n,a[100005],i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		reverse(a,a+n);
		long long int sum=0;
		if(n==1)
		{
			printf("%lld\n",a[0]);
			continue;
		}
		for(i=0;i<n;)
		{
				sum+=a[i]+a[i+1];
				i+=4;
				if(i==n-1)
				{
					sum+=a[i];
					break;
				}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
