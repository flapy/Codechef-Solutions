#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int ans=max(n,m)-(min(n,m)+k);
		if(ans<=0)
		cout<<"0\n";
		else
		cout<<ans<<endl;
	}
	return 0;
}
