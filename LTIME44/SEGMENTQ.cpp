#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    bool mark[n + 2];
    memset(mark,false,sizeof(mark));
    int l, r;
    pair <int,int > s[100004];
    map <int, bool> m;  
    int j = 0;
    while (q--)
    {
    	int op;
    	cin >> op;
    	if (op == 0)
    	{
    		cin >> l >> r;
    		for (int i = l; i <= r; i++)
    		{
    			if (!mark[i])
    			{
    				s[j++] = {l,r};
    				break;
    			}
    		}
    	}
    	else
    	{
    		int p;
    		cin >> p;
    		mark[p] = true;
    		set <pair <int,int> > :: iterator itr;
    		int cnt = 0;
    		for (int i = 0; i < j; i++)
    		{
    			if (!m[i])
    			{
    				l = s[i].first;
    				r = s[i].second;
    				bool found = true;
    				for (int i = l; i <= r; i++)
    				{
    					if (!mark[i])
    					{
    						found = false;
    						break;
    					}
    				}
    				if (found)
    				{
    					m[i] = true;
    					cnt++;
    				}
    			}
    		}
    		cout << cnt << endl;
    		fflush(stdout);
    	}
    }
	return 0;
}
