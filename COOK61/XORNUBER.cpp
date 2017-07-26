#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"2\n";
			continue;
		}
		int ans=(int) log2(n);
		int res=pow(2,ans);
		int f=(res-1)+res;
		if(f==n)
		{
			cout<<res-1<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
	}
	return 0;
}
