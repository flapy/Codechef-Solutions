// I have a unique power 
//I can make an easy question look really complex
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
vector <int> adj[50001];
 
void addEdge(int u,int v)
{
	adj[u].pb(v);
	adj[v].pb(u);
}
 
void clear(int n)
{
	for (int i = 0; i <= n; i++)
		adj[i].clear();
}
 
int main()
{
 
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
 	ios_base :: sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int p;
		pair <int,int> pa[n + 2];
		int check[n + 2];		
		for (int i = 0; i < n; i++)
		{
			check[i] = 0;
			cin >> p;
			pa[i] = {p,i + 1};
		}
		check[n] = 0;
		sort(pa,pa + n);
		int m = n - 1;
		while (m--)
		{
			int u, v;
			cin >> u >> v;
			addEdge(u,v);
		}
		for (int i = 1; i <= n; i++)
		{
			vector <int> :: iterator itr;
			check[i] = i;
			for (itr = adj[i].begin(); itr != adj[i].end(); itr++)
			{
				check[*itr] = i;
			}
			bool flag = false;
			for (int j = n - 1; j >= 0; j--)
			{
				if(check[pa[j].second] != i)
				{
					flag = true;
					cout << pa[j].second << " ";
					break;
				}
			}
			if (!flag)
			{
				cout << 0 << " ";
			}
		}
		cout << endl;
		clear(n);
	}
	return 0;
}
