#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, int x, vector<int> &a)
{
    sort(a.begin(), a.end());

    vector<pair<int, int>> v;
    int count = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            v.push_back({a[i], count});
            count = 1;
        }
    }

    v.push_back({a[n - 1], count});

    for (int i = 0; i < v.size() - 1; i++)
    {
        if ((v[i + 1].first - v[i].first) * v[i].second > x)
        {
            return v[i].first + x / v[i].second;
        }
        else
        {
            x -= (v[i + 1].first - v[i].first) * v[i].second;
            v[i + 1].second += v[i].second;
        }
    }

    return v.back().first + x / v.back().second;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> coral(n);

        for (int i = 0; i < n; i++)
        {
            cin >> coral[i];
        }

        int result = solve(n, x, coral);
        cout << result << "\n";
    }

    return 0;
}
