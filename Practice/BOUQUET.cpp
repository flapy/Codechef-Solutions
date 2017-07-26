// Sometimes Don't read the constraints
// Kyonki Chutiyapa bhi Zaruri Hain!
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        lli m1,m2,m3;
        cin >> m1 >> m2 >> m3;
        lli sum1 = m1 + m2 + m3;
        if (sum1 % 2 == 0)
            sum1--;
        lli o1,o2,o3;
        cin >> o1 >> o2 >> o3;
        lli sum2 = o1 + o2 + o3;
        if (sum2 % 2 == 0)
            sum2--;
        lli p1,p2,p3;
        cin >> p1 >> p2 >> p3;
        lli sum3 = p1 + p2 + p3;
        if (sum3 % 2 == 0)
            sum3--;
        lli ans1 = max(sum1,max(sum2,sum3));
        sum1 = m1 + o1 + p1;
        sum2 = m2 + o2 + p2;
        sum3 = m3 + o3 + p3;
        if (sum1 % 2 == 0)
            sum1--;
        if (sum2 % 2 == 0)
            sum2--;
        if (sum3 % 2 == 0)
            sum3--;
        lli ans2 = max(sum1,max(sum2,sum3));
        cout << max(ans1,max(ans2,(lli)0)) << endl;
    }
	return 0;
}
