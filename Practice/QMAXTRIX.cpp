#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int rowsum[100005],colsum[100005]={0};
	int a,b;
	long long int sum=0;
	pair<int,int> p[100005];
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		a--;
		b--;
		rowsum[i]=b-a+1;
		p[i]=make_pair(a,b);
		sum+=b-a+1;
		colsum[a]++;
		colsum[b+1]--;
	}
	for(int i=1;i<n;i++)
	{
		colsum[i]=colsum[i]+colsum[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		long long int net=sum-rowsum[x]-colsum[y];
		if(y<=p[x].second && y>=p[x].first)
		net++;
		if(net%2==0)
		cout<<"E\n";
		else
		cout<<"O\n";
	}
	return 0;
}
