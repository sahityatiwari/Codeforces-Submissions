#include <bits/stdc++.h>
using namespace std;

#define int long long

int minimumOperations(int n, vector<int> &a)
{
    int count = 0;
    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        p.push_back({a[i], i});
    }

    sort(p.begin(), p.end());
    
    for (int i = 0; i < n - 1; i++)
    {
        if (p[i].second - p[i + 1].second > 0)
            count++;
    }
    
    return count;
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

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int result = minimumOperations(n, p);
        cout << result << "\n";
    }

    return 0;
}
