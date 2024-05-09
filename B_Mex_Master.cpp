#include <bits/stdc++.h>
using namespace std;
#define int long long

int minScore(int n, vector<int> &a)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }

    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        if (a[i] == 1)
            c1++;
        if (a[i] == 2)
            c2++;
    }
    int x = n - c0, y = x - c1;

    if (n % 2 == 0)
        x = n / 2;
    else
        x = n / 2 + 1;

    if (c0 <= x)
        return 0;
    else if (y > 0 || c1 == 0)
        return 1;
    else
        return 2;

    return y;
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = minScore(n, a);

        cout << result << "\n";
    }

    return 0;
}
