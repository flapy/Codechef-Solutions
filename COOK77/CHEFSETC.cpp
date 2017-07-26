#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		lli n = 4;
		lli arr[n + 2];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		lli tot = 16;
		bool isZero = false;
		for (int i = 0; i < tot; i++)
		{
			lli sum = 0;
			bool flag = false;
			for (int j = 0; j < n; j++)
			{
				if (i & 1 << j)
				{
					flag = true;
					sum += arr[j];
				}
			}
			if (flag)
			{
				if (sum == 0)
				{
					isZero = true;
					break;
				}
			}
		}
		if (isZero)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}
