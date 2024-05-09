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
        int n, q;
        cin >> n >> q;
        int x, k = 100;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> x;
            if (x >= k)
            {
  
                continue;
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] % (1 << x) == 0)
                {
                    a[i] += (1 << (x - 1));
                    k = x;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}