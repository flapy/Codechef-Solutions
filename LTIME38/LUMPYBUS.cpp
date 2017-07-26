#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,p,q;
		cin>>n>>p>>q;
		long long int a[n+2];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		lli cnt=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				lli reqd=a[i]/2;
				if(q>=reqd)
					q-=reqd,cnt++;
				else if(q && p)
				{
					lli tot=q*2;
					a[i]-=tot;
					if(p-a[i]>=0)
						p-=a[i],cnt++;
					q=0;
				}
				else if(p && p-a[i]>=0)
					p-=a[i],cnt++;
			}
			else 
			{
				lli reqd=a[i]/2;
				if(q>=reqd && p)
				{
					q-=reqd;
					p--;
					cnt++;
				}
				else if(q && p)
				{
					lli tot=q*2;
					a[i]-=tot;
					if(p-a[i]>=0)
						p-=a[i],cnt++;
					q=0;
				}
				else if(p && p-a[i]>=0)
					p-=a[i],cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
