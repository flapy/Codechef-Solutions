#include <iostream>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int *a=new long long int[n+2];
		long long int *dp=new long long int[n+2];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			if(i==n-1)
			{
				dp[i]=1;
			}
			else
			{
				if(a[i]*a[i+1]<0)
				{
					dp[i]=dp[i+1]+1;
				}
				else
				dp[i]=1;
			}
		}
		for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";
		cout<<endl;
	}
	return 0;
}
