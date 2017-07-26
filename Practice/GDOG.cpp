#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base:: sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int ans=1;
		for(int i=1;i<=k;i++)
		{
			ans=max(ans,n%i);
		}
		cout<<ans<<endl;
	}	
	return 0;
}
