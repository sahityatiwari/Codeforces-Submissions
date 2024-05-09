#include <bits/stdc++.h>
using namespace std;

#define int long long

int calculateCoins(int n, vector<int> &c, int m, pair<int, int> &q, vector<int> a)
{
   
    if (q.second > q.first)
    {
        int ans = q.second - q.first;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] >= q.first - 1 && a[i] < q.second - 1)
                ans = ans - 1 + c[a[i] + 1] - c[a[i]];
        }
        return ans;
    }
    else
    {
        int ans = q.first - q.second;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] <= q.first - 1 && a[i] > q.second - 1)
                ans = ans - 1 + abs(c[a[i] - 1] - c[a[i]]);
        }
        return ans;
    }
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

        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<int> b, a;
        for (int i = 1; i < n - 1; i++)
        {
            if (abs(c[i - 1] - c[i]) < abs(c[i + 1] - c[i]))
            {
                a.push_back(i);
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (abs(c[i - 1] - c[i]) > abs(c[i + 1] - c[i]))
            {
                b.push_back(i);
            }
        }

        int m;
        cin >> m;

        pair<int, int> q;
        for (int i = 0; i < m; i++)
        {
            int result;
            cin >> q.first >> q.second;
            if (q.second > q.first)
                 result = calculateCoins(n, c, m, q, a);
            else
                result = calculateCoins(n, c, m, q, b);
            cout << result << "\n";
        }
    }

    return 0;
}
