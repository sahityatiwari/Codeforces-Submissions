#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int asum = 0;
        vector<int> a(n);
        vector<int> sum(n + 1);
        sum[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum[i + 1] += sum[i] + a[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int sumi = sum[n] - sum[l - 1] + sum[r] + k * (r - l + 1);

            if (sumi % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}
