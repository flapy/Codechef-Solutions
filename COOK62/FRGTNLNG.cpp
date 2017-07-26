#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while(t--)
	{
		int n,k;
		string s[100005];
		cin>>n>>k;
		set<string> fl;
		set<string> ml;
		int i=0;
		while(n--)
		{
			cin>>s[i];
			i++;
		}
		while(k--)
		{
			int x;
			cin>>x;
			string s1;
			while(x--)
			{
				cin>>s1;
				ml.insert(s1);
			}
		}
		for(int j=0;j<i;j++)
		{
			//cout<<s[j];
			if(ml.find(s[j])==ml.end())
			cout<<"NO ";
			else
			cout<<"YES ";
		}
		cout<<endl;
	}
	return 0;
}
