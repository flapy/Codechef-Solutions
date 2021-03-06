#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	int l=s.length();
	map<char,int> m;
	vector<int> v[10];
	for(int i=0;i<l;i++)
	{
		int p=s[i]-48;
		v[p].push_back(i);
	}
	queue<int> q;
	q.push(0);
	bool visited[100004]={false};
	visited[0]=true;
	int d[100005];
	for(int i=0;i<=l;i++)
	d[i]=INT_MAX;
	d[0]=0;
	while(!q.empty())
	{
		int u=q.front();
		int k=s[u]-48;
		int n=v[k].size();
		q.pop();
		for(int i=0;i<n;i++)
		{
			if(!visited[v[k][i]])
			{
				visited[v[k][i]]=true;
				q.push(v[k][i]);
				d[v[k][i]]=d[u]+1;
			}
		}
		v[k].clear();
		if(u+1<l && !visited[u+1])
		{
			q.push(u+1);
			d[u+1]=d[u]+1;
			visited[u+1]=true;
		}
		if(u-1>=0 && !visited[u-1])
		{
			visited[u-1]=true;
			q.push(u-1);
			d[u-1]=d[u]+1;
		}
		
		/*if(!visited[m[s[u]]])
		{
			d[m[s[u]]]=d[u]+1;
			q.push(m[s[u]]);
			visited[m[s[u]]]=true;
		}*/
	}
	cout<<d[l-1]<<endl;
	return 0;
}
