#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		vector<int> v;
		cin>>n>>d;
		for(int i=0;i<n;i++)
		{
			int b;
			cin>>b;
			v.push_back(b);
		}
		sort(v.begin(),v.end());
		long long int sum=0;
		for(int i=n-1;i>0;i--)
		{
			if(v[i]-v[i-1]<d)
			{
				sum+=v[i]+v[i-1];
				i--;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
