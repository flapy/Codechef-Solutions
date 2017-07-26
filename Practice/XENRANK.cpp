#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		lli u, v;
		cin >> u >> v;
		lli k = u + v;
		lli lastRank = (k * (k + 1)) / 2;
		lli maxRank = lastRank + 1 + u;
		cout << maxRank << endl;
	}
	return 0;
}
