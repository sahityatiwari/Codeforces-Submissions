
#include <bits/stdc++.h>
using namespace std;

#define int long long
bool comparePair(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first > b.first;
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
        int m = INT_MIN;

        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }

        vector<pair<int, int>> ai, bi, ci;

        for (int i = 0; i < n; i++)
        {
            ai.push_back({a[i], i});
            bi.push_back({b[i], i});
            ci.push_back({c[i], i});
        }

        sort(ai.begin(), ai.end(), comparePair);
        sort(bi.begin(), bi.end(), comparePair);
        sort(ci.begin(), ci.end(), comparePair);

        vector<bool> used(n, false);

        for (int i = 0; i < 3; i++)
        {
            used[ai[i].second] = true;
            for (int j = 0; j < 3; j++)
            {
                if (!used[bi[j].second])
                {
                    used[bi[j].second] = true;
                    for (int k = 0; k < 3; k++)
                    {
                        if (!used[ci[k].second])
                        {
                            m = max(m, ai[i].first + bi[j].first + ci[k].first);
                        }
                    }
                    used[bi[j].second] = false;
                }
            }
            used[ai[i].second] = false;
        }
        cout << m << "\n";
    }

    return 0;
}
