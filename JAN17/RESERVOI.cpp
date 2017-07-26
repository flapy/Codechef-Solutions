#include <bits/stdc++.h>
using namespace std;
char arr[1004][1004];
bool isStableBlocks(int n,int m)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char ch = arr[i + 1][j];
			if (arr[i][j] == 'B')
			{
				if(ch == 'W' || ch == 'A')
				{
					return false;
				}
			}
		}
	}
	return true;
}
 
 
bool isStableWater(int n,int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char ch = arr[i][j];
			int temp = j;
			if (ch == 'W')
			{
				while (j < m && arr[i][j] == 'W')
					j++;
				if (j == m || arr[i][j] != 'B')
					return false;
				while (temp >= 0  && arr[i][temp] == 'W')
				{
					temp--;
				}
				if (temp < 0 || arr[i][temp] != 'B')
					return false;
				j = j - 1;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			char ch = arr[j][i];
			if (ch == 'W')
			{
				while (j < n && arr[j][i] == 'W')
					j++;
				if (j == n || arr[j][i] != 'B')
					return false;
				j = j - 1;
			}
		}
	}
	
	return true;
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
		int n, m;
		cin >> n >> m;
 
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> arr[i][j];
		}
 
		if (!isStableBlocks(n,m))
		{	
			cout << "no\n";
		}
		else 
		{
			if (isStableWater(n,m))
				cout << "yes\n";
			else
				cout << "no\n";
		}
	}
	return 0;
}
