#include <iostream>
using namespace std;
int a[100000], seen[100001];
void initSeen()
{
    for (int i = 0; i <= 100000; ++i)
        seen[i] = 0;
}
int main()
{
int t, n, ctr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        initSeen();
        ctr = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (!seen[a[i]])
            {
                ++ctr;
                seen[a[i]] = 1;
            }
        }
    cout << ctr << '\n';
    }
    return 0;
}
