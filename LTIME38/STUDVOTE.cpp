#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		map<int,int> m;
		int a[n+2];
		map<int,int> elig;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]!=i+1)
			{
				m[a[i]]++;
				elig[i+1]=true;
			}
		}
		map<int,int> ::iterator itr;
		int cnt=0;
		for(itr=m.begin();itr!=m.end();itr++)
		{
			if(itr->second>=k && elig[itr->first])
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
