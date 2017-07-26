#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 500; n-- ; i--) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
