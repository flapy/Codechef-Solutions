#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a;
	set<int> s;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s.insert(a);
	}
	pair <int,string > frnd[m+2];
	pair <int,string > popu[m+2];
	
	int j = 0;
	int k = 0;
	while (m--)
	{
		int f,p;
		cin >> f >> p;
		string str;
		cin >> str;
		if (s.find(f) != s.end())
		{
			frnd[j++] = {p,str};
		}
		else
		{
			popu[k++] = {p,str};
		}
	}
	sort(frnd,frnd + j);
	reverse(frnd,frnd + j);
	sort(popu,popu + k);
	reverse(popu,popu + k);
	for (int i = 0; i < j; i++)
	{
		cout << frnd[i].second << endl;
	}
	for (int i = 0; i < k; i++)
	{
		cout << popu[i].second << endl;
	}
	return 0;
}
