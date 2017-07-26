#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base :: sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a;
		set <int> s1;
		set <int> s2;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			s1.insert(a);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> a;
			s2.insert(a);
		}
		set <int> :: iterator itr;
		int cnt = 0;
		for (itr = s1.begin(); itr != s1.end(); itr++)
		{
			if (s2.find(*itr) != s2.end())
			{
				s2.erase(*itr);
				cnt++;
			}
		}
		cout << cnt << endl;
		
	}
	return 0;
}
