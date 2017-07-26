#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y;
		int mark[105]={0};
		cin>>m>>x>>y;
		int d=x*y;
		int k,i,j;
		for(int p=0;p<m;p++)
		{
			int a;
			cin>>a;
			if(a-d<=0)
			i=1;
			else
			i=a-d;
			if(a+d>100)
			j=100;
			else
			j=a+d;
			for(int k=i;k<=j;k++)
			mark[k]=1;
		}
		int cnt=0;
		for(int i=1;i<=100;i++)
		{
			if(mark[i]==0)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
