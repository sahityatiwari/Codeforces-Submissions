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

        vector<int> ans(n);
        int curr = n;
        for (int i = n - 1; i >= 0; i--)

        {
            if (a[i] <= 0)
            {
                ans[i] = curr + abs(a[i]);
            }
            else

            {
                ans[i] = curr - a[i];
                curr = ans[i];
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
