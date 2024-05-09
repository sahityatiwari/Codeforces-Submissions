#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] <= a[i + 1] && a[i] >= 2 * a[i - 1])
            {
                a[i + 1] = a[i + 1] - a[i - 1];
                a[i] = a[i] - 2 * a[i - 1];
                a[i - 1] = 0;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum == 0)
            cout << "YES" << endl;
            else
        cout << "NO" << endl;
    }

    return 0;
}