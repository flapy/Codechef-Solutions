#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        lli element;
        lli sumOfPositiveIntegers = 0;
        lli sumOfNegativeIntegers = 0;
        vector <lli> arrOfNegativeIntegers;
        for (int i = 0; i < n; i++) {
            cin >> element;
            if (element >= 0) {
                sumOfPositiveIntegers += element;
            } else {
                sumOfNegativeIntegers += element;
                arrOfNegativeIntegers.push_back(element);
            }
        }
        lli positiveIntegersCount = n - arrOfNegativeIntegers.size();
        lli happinessForPositiveIntegers = sumOfPositiveIntegers * positiveIntegersCount;
        lli totalHappiness = happinessForPositiveIntegers + sumOfNegativeIntegers;
        sort(arrOfNegativeIntegers.rbegin(), arrOfNegativeIntegers.rend());
        vector <lli> :: iterator itr;
        lli cnt = 1;
        lli ans = totalHappiness;
        lli sum = 0;
        lli positiveNegativeIntegersSet;
        for (itr = arrOfNegativeIntegers.begin(); itr != arrOfNegativeIntegers.end(); itr++) {
            sum += *itr;
            positiveNegativeIntegersSet = sumOfPositiveIntegers + sum;
            lli happiness = positiveNegativeIntegersSet * (positiveIntegersCount + cnt) +
                                                           (sumOfNegativeIntegers - sum);
           ans = max(ans, happiness);
           cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}
