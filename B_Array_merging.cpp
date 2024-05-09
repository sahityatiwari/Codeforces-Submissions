#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxLengthOfEqualSubarray(int n, vector<int> &a, vector<int> &b)
{

    int v1, p = -1, ans = 0, s = 1;
    int t[2 * n + 5] = {};


    for (int i = 0; i < n; i++)
    {
        v1 = a[i];
        if (v1 == p)
            s++;
        else
            s = 1;
        t[v1] = max(t[v1], s);
        p = v1;
    }
    p = -1;
    s = 1;
    for (int i = 0; i < n; i++)
    {
        v1 = b[i];
        if (v1 == p)
            s++;
        else
            s = 1;
        ans = max(ans, s + t[v1]);
        p = v1;
    }
    for (int i = 0; i <= 2 * n; i++)
        ans = max(ans, t[i]);

    return ans;
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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        int result = maxLengthOfEqualSubarray(n, a, b);
        cout << result << "\n";
    }

    return 0;
}
