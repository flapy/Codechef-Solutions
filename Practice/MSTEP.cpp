#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t,n,a;
	cin>>t;
	map<int,pair<int,int> > m;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a;
				m[a]=make_pair(i,j);
			}
		}
		long long int ans=0;
		long long int cnt=n*n;
		for(long long int i=2;i<=cnt;i++)
		{
			ans+=abs(m[i].first-m[i-1].first)+abs(m[i].second-m[i-1].second);
		}
		cout<<ans<<endl;
	}
	return 0;
}
