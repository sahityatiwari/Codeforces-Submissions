#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, int m, int k)
{
    int count = 0;

    if (k > 3)
        return 0;
    else if (k == 1)
        return 1;
    else if (k == 2)
        return min(m, (m / n) + n - 1);
    else
        return max(count, (m - m / n - n + 1));
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int result = solve(n, m, k);
        cout << result << "\n";
    }

    return 0;
}
