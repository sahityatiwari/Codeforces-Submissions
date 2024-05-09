#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int x = k + 1;
        vector<int> ans;
        for (int i = n - k; i <= n; i++)
        {
            ans.push_back(i);
        }
        for (int i = n - k - 1; i >= 1; i--)
        {
            ans.push_back(i);
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
