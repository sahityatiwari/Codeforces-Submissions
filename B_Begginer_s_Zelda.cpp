#include <bits/stdc++.h>
using namespace std;

#define int long long

int solveTest(vector<pair<int, int>> &edges, int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        mp[edges[i].first]++;
        mp[edges[i].second]++;
    }

    int count = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        if (it->second > 2)
        {
            count += it->second - 2;
        }
    }
    return (count + 1) / 2 + 1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> edges(n - 1);
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> edges[i].first >> edges[i].second;
        }

        int result = solveTest(edges, n);
        cout << result << "\n";
    }

    return 0;
}
