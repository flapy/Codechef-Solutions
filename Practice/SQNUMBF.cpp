#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	long long a[102];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			long long ans=__gcd(a[i],a[j]);
			if(ans!=1)
			{
				cout<<ans<<endl;
				return ;
			}
		}
	}
	vector<int>::iterator itr;
	for(int i=0;i<n;i++)
	{
		for(long long j=1;j*j*j<=a[i];j++)
		{
			if(a[i]%(j*j)==0 &&j>1)
			{
				cout<<j<<endl;
				return ;
			}
			if(a[i]%j==0)
			{
				long long temp=a[i]/j;
				if(fmod(sqrt(temp),1)==0 && (long long)(sqrt(temp))>1)
				{
					cout<<(long long)sqrt(temp)<<endl;
					return;
				}
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
