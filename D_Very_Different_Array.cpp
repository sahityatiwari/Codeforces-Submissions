#include <bits/stdc++.h>
using namespace std;
#define int long long

int maximumTotalDifference(int n, int m, vector<int> &a, vector<int> &b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = n - 1, r = 0, s = m-1;
    int ans = 0;

    while (i <= j)
    {
        if (abs(a[j] - b[r]) > abs(b[s] - a[i]))
        {
            ans += abs(a[j] - b[r]);
            j--;
            r++;
        }
        else
        {
            ans += abs(b[s] - a[i]);
            i++;
            s--;
        }
    }

    return ans;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        cout << maximumTotalDifference(n, m, a, b) << endl;
    }

    return 0;
}
