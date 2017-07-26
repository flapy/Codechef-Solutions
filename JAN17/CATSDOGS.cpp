#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	int t;
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	
	cin >> t;
	while (t--)
	{
		lli c, d, l;
		cin >> c >> d >> l;
		lli tot = 4 * (c + d);
		if (l > tot)
		{
			cout << "no" << endl;
		}
		else
		{
			lli remLegs = tot - l;
 			if (remLegs % 4 == 0)
			{
				lli catsAboveDogs = remLegs / 4;
				if (catsAboveDogs <= 2 * d && catsAboveDogs <= c)
				{
					cout << "yes" << endl;
				}
				else
				{
					cout << "no" << endl;
				}
			}
			else
			{
				cout << "no" << endl;;
			}
		}
	}
	return 0;
}
