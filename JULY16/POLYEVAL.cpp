#include<bits/stdc++.h>
using namespace std;
#define MOD 786433
#define lli long long int
int solve(lli x,lli a[],lli n)
{
	lli sum=a[0];
	lli ans=x;
	for(lli i=1;i<=n;i++)
	{
		sum=(sum+(a[i]*ans))%MOD;
		ans=(ans*x)%MOD;
	}
	return sum;
}
int main()
{
	lli n;
	cin>>n;
	lli a[n+2];
	for(lli i=0;i<=n;i++)
		cin>>a[i];
	lli q;
	cin>>q;
	while(q--)
	{
		lli x;
		cin>>x;
		cout<<solve(x,a,n)<<endl;
	}
	return 0;
}
