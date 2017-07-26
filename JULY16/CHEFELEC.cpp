#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin>>t;
	int arr[100004];
	vector<int> ones;
	while(t--)
	{
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(s[i]=='1')
				ones.push_back(i);
		}
		vector<int> ::iterator itr;
		int prev;
		int next;
		int cnt=0;
		int ans=0;
		for(itr=ones.begin();itr!=ones.end();itr++)
		{
			if(cnt==0)
			{
				prev=*itr;
				cnt++;
			}
			else
			{
				next=*itr;
				int len=min(arr[next]-arr[prev+1],arr[next-1]-arr[prev]);
				for(int j=prev+1;j<next-1;j++)
				{
					len=min(arr[j]-arr[prev]+arr[next]-arr[j+1],len);
				}
				ans+=len;
				prev=*itr;
			}
		}
		cout<<ans+(arr[n-1]-arr[ones[ones.size()-1]])+(arr[ones[0]]-arr[0])<<endl;
		ones.clear();
	}
	return 0;
}
