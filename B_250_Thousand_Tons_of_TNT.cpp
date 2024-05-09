#include <bits/stdc++.h>
using namespace std;

#define int long long

int maxAbsoluteDifference(int n, vector<int> &a)
{
    vector<int> sum(n + 1, 0);
    int summ = 0;

    for (int i = 1; i <= n; i++)
    {
        summ += a[i - 1];
        sum[i] = summ;
    }

    int ans = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int ma = 0, mi = LLONG_MAX;

            for (int j = n / i; j <= n; j += n / i)
            {
                ma = max(ma, sum[j] - sum[j - n / i]);
                mi = min(mi, sum[j] - sum[j - n / i]);
            }

            ans = max(ans, ma - mi);
        }
    }

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

        vector<int> weights(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> weights[i];
        }

        int result = maxAbsoluteDifference(n, weights);
        cout << result << "\n";
    }

    return 0;
}
