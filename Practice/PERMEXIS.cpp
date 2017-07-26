#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n+2];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr + n);
		string ans = "YES";
		for (int i = 1; i < n; i++)
		{
			if (arr[i] - arr[i-1] > 1)
			{
				ans = "NO";
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
