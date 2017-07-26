// This is WHat Happens When YOU DONT CODE 
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007 
void calcPrefixSum (lli arr[], int n, lli prefixSum[]) {
	memset(prefixSum, 0, sizeof(prefixSum));
	prefixSum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefixSum[i] = (prefixSum[i - 1] + arr[i]);
	}
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		lli p, q, r;
		cin >> p >> q >> r;
		lli prefixSumOfA[p + 2], prefixSumOfC[r + 2];
		lli a[p + 2], b[q + 2], c[r + 2];
		for (int i = 0; i < p; i++) {
			cin >> a[i];
		}
		sort(a, a + p);
		calcPrefixSum(a, p, prefixSumOfA);
		for (int i = 0; i < q; i++) {
			cin >> b[i];
		}
		for (int i = 0; i < r; i++) {
			cin >> c[i];
		}
		sort(c, c + r);
		lli ans = 0;
		calcPrefixSum(c, r, prefixSumOfC);
		for (int i = 0; i < q; i++) {
			lli y = b[i];
			int indexForX = (upper_bound(a, a + p, y) - a) - 1;
			lli numberOfElementsForX = indexForX + 1;
			int indexForZ = (upper_bound(c, c + r, y) - c) - 1;
			lli numberOfElementsForZ = indexForZ + 1;
			if (indexForX == -1 || indexForZ == -1) {
				continue;
			}
			ans = (ans + ((prefixSumOfA[indexForX] % MOD + (y * numberOfElementsForX) % MOD) % MOD) * 
							(((prefixSumOfC[indexForZ] % MOD + (y * numberOfElementsForZ) % MOD)) % MOD)) % MOD;
		}
		cout << ans << endl;
	}
	return 0;
}
