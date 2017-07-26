#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long int sum=0;
		cin>>n;
		int a[105];
		int p[104]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]==0 && i==1)
			{
				p[1]=i;
			}
			else if(a[i]==0)
			{
				for(int j=i-1;j>=1;j--)
				{
					p[j+1]=p[j];
				}
				p[1]=i;
			}
			else
			{
				int cntl,cntr;
				cntl=cntr=0;
				int flagl,flagr;
				flagl=1;
				flagr=0;
				int pos;
				for(int j=1;j<i;j++)
				{
					if(p[j]!=a[i] && flagl)
					{
						cntl++;
					}
					else if(p[j]==a[i])
					{
						pos=j;
						flagl=0;
						flagr=1;
					}
					else
					{
						cntr++;
					}
				}
				cntl++;
				sum+=min(cntr,cntl);
				for(int j=i;j>pos+1;j--)
				{
					p[j]=p[j-1];
				}
				p[pos+1]=i;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
