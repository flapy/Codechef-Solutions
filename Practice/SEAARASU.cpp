#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int ans;
		long long int n;
		int a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(i==0)
			ans=a;
			else
			ans=__gcd(a,ans);
		}
		cout<<n*ans<<endl;
	}
	return 0;
}
