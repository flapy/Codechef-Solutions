#include<bits/stdc++.h>
using namespace std;
int main()
{
			int a,b,c,d;
	int n,m;
	scanf("%d %d",&n,&m);
	map<pair<int,int>,pair<int,int> > ma;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(ma[make_pair(a,b)].second<=d)
		{
			ma[make_pair(a,b)]=make_pair(c,d);
		}
	}
	while(m--)
	{
		scanf("%d %d",&a,&b);
		cout<<ma[make_pair(a,b)].first<<"\n";
	}
	return 0;
}
