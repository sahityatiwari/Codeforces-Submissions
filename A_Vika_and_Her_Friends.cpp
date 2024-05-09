#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canRunAway(int n, int m, int k, pair<int, int> v, vector<pair<int, int>> &f)
{
    bool flag = true;
    for (int i = 0; i < f.size(); i++)
    {
        if ((v.first + v.second) % 2 == (f[i].first + f[i].second) % 2)
            flag = false;
    }
    return flag;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        pair<int, int> vika;
        cin >> vika.first >> vika.second;

        vector<pair<int, int>> friends(k);
        for (int i = 0; i < k; i++)
        {
            cin >> friends[i].first >> friends[i].second;
        }

        bool result = canRunAway(n, m, k, vika, friends);

        if (result)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}
