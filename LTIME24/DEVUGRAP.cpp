#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,k,a[100005],i,cnt=0;
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]%k==0)
			{
				continue;
			}
			if(a[i]<k)
			{
				cnt+=k-a[i];
				continue;
			}
			long long int cur=a[i]/k;
			long long int ha=cur*k;
			long long int just_grt=a[i]/k+1;
			long long int nas=k*just_grt;
			cnt+=min(a[i]-ha,nas-a[i]);
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
