#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int max=INT_MIN;
		int a[100005];
		int i,n,d,m,k,ans;
		cin>>n>>k>>d>>m;
		int min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int w=0;w<n;w++)
		{
			int flag=0;
			//cout<<ans<<endl;
			int sum=0;
			for(int j=0;j<n;j++)
			{
				if(j==w)
				{
					sum+=0;
					flag=1;
				}
				else if(flag==0)
				{
					sum+=a[j];
				}
				else if(flag==1 && j-w>d)
				{
					sum+=a[j];
				}
				else
				{
						sum+=(a[j]*m);
				}
			}
			if(sum>max)
			max=sum;
		}
		cout<<max<<endl;
	}
	return 0;
}
