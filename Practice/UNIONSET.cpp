#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    bool mark[2502][2503];
	    memset (mark,false,sizeof(mark));
	    for (int i = 0; i < n; i++) {
	        int len, element;
	        cin >> len;
	        while (len--) {
	            cin >> element;
	            mark[i][element] = true;
	        }
	    }
	    int ans = 0;
	    for (int i = 0; i < n; i++) {
	        for (int j = i + 1; j < n; j++) {
                bool isMergePossible = true;
                for (int l = 1; l <= k; l++) {
                    if (!mark[i][l] && !mark [j][l]) {
                        isMergePossible = false;
                        break;
                    }
                }
                if (isMergePossible) {
                    ans++;
                }
            }
        } 
	cout << ans << endl;
    }
    return 0;
}

