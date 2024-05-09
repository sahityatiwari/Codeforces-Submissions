#include <bits/stdc++.h>
using namespace std;

#define int long long
int solve(int n, vector<pair<int, int>> &a)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].first == 1)
            maxi = max(a[i].second, maxi);
        else if (a[i].first == 2)
            mini = min(a[i].second, mini);
    }

    int c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].first == 3 && (a[i].second >= maxi && a[i].second <= mini))
            c3++;
    }

    if (mini < maxi)
        return 0;
    else
        return mini - maxi + 1 - c3;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> constraints(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> constraints[i].first >> constraints[i].second;
        }

        cout << solve(n, constraints) << '\n';
    }

    return 0;
}
