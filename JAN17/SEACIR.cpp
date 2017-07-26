#include <bits/stdc++.h>
 // I am a fool to use mp instead of {} I know that!
#define mp make_pair
using namespace std;
int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int n, s, sk, r;
	cin >> n >> s >> sk;
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> r;
	}
	map <int,int> m;
	map <int,pair <int,int> > store;
	while (n--)
	{
		cin >> r;
		if (!m[r])
		{
			cout << r << " " << s - r << endl;
			m[r] = 1;
			store[r] = mp(r,s - r);
		}
		else
		{
			if (sk > 0)
			{
				sk--;
				cout << "-1" << " " << "-1" << endl;
			}
			else
			{
				store[r] = mp(store[r].first + 1,store[r].second - 1);
				if (store[r].first > s - r || store[r].second < r)
				{
					store[r] = mp(r,s - r);
				}
				cout << store[r].first << " " << store[r].second << endl;
			}
		}
		fflush(stdout);  
	}
	return 0;
}
