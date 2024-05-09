#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, int m, int k, vector<int> &j, vector<int> &g)
{

    if (k % 2 == 1)
    {
        sort(j.begin(), j.end());
        sort(g.begin(), g.end());
        if (j[0] < g[m - 1])
        {
            swap(j[0], g[m - 1]);
        }
    }
    else
    {
        sort(j.begin(), j.end());
        sort(g.begin(), g.end());
        if (j[0] < g[m - 1])
        {
            swap(j[0], g[m - 1]);
        }
        sort(j.begin(), j.end());
        sort(g.begin(), g.end());
        if (g[0] < j[n - 1])
        {
            swap(g[0], j[n - 1]);
        }
    }
    int sumj = 0;
    for (int i = 0; i < n; i++)
    {
        sumj += j[i];
    }
    return sumj;
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

        vector<int> jellyfish(n);
        vector<int> gellyfish(m);

        for (int i = 0; i < n; i++)
        {
            cin >> jellyfish[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> gellyfish[i];
        }

        int result = solve(n, m, k, jellyfish, gellyfish);
        cout << result << "\n";
    }

    return 0;
}
