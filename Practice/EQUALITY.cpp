#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	long long int t,i,sum,a[50005],ans,n;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		ans=sum/(n-1);
		for(i=0;i<n;i++)
		{
			if(i==n-1)
			cout<<ans-a[i]<<"\n";
			else
			cout<<ans-a[i]<<" ";
		}
	}
	return 0;
}
