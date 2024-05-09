#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        int r =0 ,s =0;
        bool flag = 0;
        int a1 = 0, a2 = 0;
        vector<int> ans(k + 1, 0);
        vector<pair<int, int>> mp(k + 1, {0, 0});

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> c;
        for (int i = 0; i < n; i++)
        {
            c.push_back({a[i], 1});
        }
        for (int i = 0; i < m; i++)
        {
            c.push_back({b[i], 2});
        }
        sort(c.begin(), c.end());

        for (int i = 0; i < m + n; i++)
        {
            int fs = c[i].first;
            int ss = c[i].second;
            if (fs >= 1 && fs <= k)
            {
                ans[fs]++;
                if (ss == 2)
                {
                    mp[fs].second++;
                }
                if (ss == 1)
                {
                    mp[fs].first++;
                }
            }
        }
        for (int i = 1; i <= k; i++)
        {
            if (ans[i] == 0)
            {
                flag = 1;
                break;
            }
            if (mp[i].first > 0)
            {

                a1++;
            }
            if (mp[i].second > 0)
                a2++;
        }

        if (flag == 1 || a1 < k / 2 || a2 < k / 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
