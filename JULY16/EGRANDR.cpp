#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+2];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		int val=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==2)
			{
				val=1;
				break;
			}
			else if(a[i]==5)
			{
				val=2;
			}
		}
		if(val==2)
		{
			float net=sum/(float)n;
			if(net<4.0)
				cout<<"No\n";
			else
				cout<<"Yes\n";
		}
		else
			cout<<"No\n";
	}
	return 0;
}
