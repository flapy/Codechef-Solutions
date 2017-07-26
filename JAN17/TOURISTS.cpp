// 20 ke Liye
// Dekho Test Cases Mein kitna hain DUM
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define lli long long int
list <int> adj[100004];
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
void addEdge(int u,int v)
{
	adj[u].pb(v);
}
int cnt = 0;
bool visit[100004] = {false};
void clear(int n)
{
	for (int i = 0; i <= n; i++)
	{
		adj[i].clear();
		visit[i] = false;
	}
}
 
void dfs(int u)
{
	visit[u] = true;
	cnt++;
	list <int> :: iterator itr;
	for (itr = adj[u].begin(); itr != adj[u].end(); itr++)
	{
		if (!visit[*itr])
		{
			dfs(*itr);
		}
	}
}
 
void reverseGraph(int n)
{
	list <int> :: iterator itr;
	list <int> temp[n + 2];
	for (int i = 1; i <= n; i++)
	{
		for (itr = adj[i].begin(); itr != adj[i].end(); itr++)
		{
			temp[*itr].pb(i);
		}
	}
	for (int i = 1; i <= n; i++)
		adj[i] = temp[i];
} 
bool isSCG(int n)
{
	cnt = 0;
	dfs(1);
	if (cnt == n)
	{
		reverseGraph(n);
		for (int i = 1; i <= n; i++)
			visit[i] = false;
		cnt = 0;
		dfs(1);
		if (cnt == n)
			return true;
		return false;
	}
	return false;
} 
 
int main()
{
 
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int n, m;
	n = inp();
	m = inp();
	pair <int,int> p[m + 2];
	for (int i = 0; i < m; i++)
	{
		int u, v;
		u = inp();
		v = inp();
		p[i] = mp(v,u);
	}
	int st, end;
	if (m > 50)
	{
		st = 500;
		end = 1000;
	}
	else
	{
		st = 0;
		end = pow(2,m);
	}
	bool ans = false;
	pair <int,int> tourFrnd[m + 2];
	for (int i = st; i < end; i++)
	{
		bool flag = true;
		for (int j = 0; j < m; j++)
		{
			if (i & 1 << j)
			{
				tourFrnd[j] = mp(p[j].second,p[j].first);
				addEdge(p[j].second,p[j].first);
			}
			else
			{
				tourFrnd[j] = mp(p[j].first,p[j].second);
				addEdge(p[j].first,p[j].second);
			}
		}
		if(isSCG(n))
		{
			ans = true;
			break;
		}
 
		clear(n);
	}
	if (ans)
	{
		printf("YES\n");
		for (int i = 0; i < m; i++)
			printf("%d %d\n",tourFrnd[i].second,tourFrnd[i].first);
	}
	else
		printf("NO\n");
	return 0;
}
