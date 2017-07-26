#include <bits/stdc++.h>
using namespace std;
#define lli long long int
list<int> adj[35005];
bool visit[35005]={false};
bool flag=false;
int arr[35005];
int cnt=0;
void dfs(int u,int val)
{
	if(flag)
	{
		arr[cnt++]=u;
		return ;
	}
	if(visit[u])
		return ;
	if(u==val)
	{
		arr[cnt++]=u;
		flag=true;
		return ;
	}
	visit[u]=true;
	list<int> ::iterator itr;
	if(!flag)
	{
		for(itr=adj[u].begin();itr!=adj[u].end();itr++)
		{
			if(flag)
				break;
			if(!visit[*itr])
				dfs(*itr,val);
		}
		if(flag)
		{
			arr[cnt++]=u;
			//cout<<arr[cnt-1]<<endl;
		}
	}
}
#define inchar getchar_unlocked
    #define pc putchar_unlocked
inline int inp() {
int n, ch;
while ((ch = inchar()) < '0');
n = (ch - '0');
while ((ch = inchar()) >= '0')
	n = (n << 3) + (n << 1) + (ch - '0');
return n;
}
int main() {
	int n;
	n=inp();
	int a[n+2];
	for(int i=0;i<n;i++)
		a[i]=inp();
	n--;
	int lim=n+1;
	while(n--)
	{
		int u,v;
		u=inp();
		v=inp();
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int q;
	q=inp();
	while(q--)
	{
		char ch;
		int x,y;
		scanf("%ch",&ch);
		x=inp();
		y=inp();
		flag=false;
		cnt=0;
		dfs(x,y);
		vector<int> v;
		for(int i=0;i<cnt;i++)
			v.push_back(a[arr[i]-1]);
		if(lim<=1004)
			sort(v.begin(),v.end());
		if(ch=='F')
		{
				int ma=INT_MIN;
				int mi=INT_MAX;
				for(int i=0;i<cnt;i++)
				{
					ma=max(ma,v[i]);
					mi=min(mi,v[i]);
				}
				//cout<<ma<<" "<<mi<<endl;
				printf("%d\n",ma-mi);
		}
		else
		{
			int ans=INT_MAX;
			for(int i=0;i<cnt-1;i++)
			{
				ans=min(v[i+1]-v[i],ans);
			}
			printf("%d\n",ans);
		}
		for(int i=1;i<=lim;i++)
			visit[i]=false;
	}
	return 0;
}
