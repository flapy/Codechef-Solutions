#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,a[100005],i;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		sort(a,a+n);
		long long int bomb=0;
		for(i=0;i<n;i++)
		{
			if(i+1!=n)
			{
				if(a[i+1]==a[i]+1)
					bomb++,i++;
				else
					bomb++;
			}
			else
				bomb++;
		}
		long long int sum=0;
		long long int seq=1;
		for(i=1;i<n;i++)//finding continuos sequence
		{
			if(a[i]==a[i-1]+1)
			{
				seq++;
			}
			else
			{
				sum += (seq + 2) / 3;	
				seq=1;
			}
		}
		sum += (seq + 2) / 3;	
		printf("%lld %lld\n",sum,bomb);
	}
	return 0;
}
