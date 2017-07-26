#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[100005];
		vector<int> sta;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				//sta[cnt++]=arr[i];
				sta.push_back(arr[i]);
				cnt++;
			}
			else
			{
				int pos=upper_bound(sta.begin(),sta.end(),arr[i])-sta.begin();
				if(pos<cnt)
				{
					sta[pos]=arr[i];
				}
				else
				{
					sta.push_back(arr[i]);
					cnt++;
				}
			}
		}
		cout<<cnt<<" ";
		for(int i=0;i<cnt;i++)
		{
			cout<<sta[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
