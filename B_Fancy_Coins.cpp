#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int m, int k, int a1, int ak)
{
    int p = max(0LL, min(m / k, (m - a1 + k - 1) / k));
    int ans = max(0LL, p - ak) + max(0LL, m - p * k - a1);
    return ans;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        cout << solve(m, k, a1, ak) << "\n";
    }

    return 0;
}
