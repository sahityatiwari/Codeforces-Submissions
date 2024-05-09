#include <bits/stdc++.h>

#define vi vector<double>
using namespace std;
#define int long long

void solve()
{
    double n;
    cin >> n;
    vi a(n);
    for (double i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    double q;
    cin >> q;
    vi psum(n, 0);
    for (double i = 0; i < n; ++i)
    {
        psum[i] = (i == 0) ? a[i] : psum[i - 1] + a[i];
    }

    while (q--)
    {
        double l, u;
        cin >> l >> u;
        l--;

        double vertex = (2.0 * u + 1.0) / 2.0;

        vertex += (l == 0) ? 0 : psum[l - 1];

        // Binary search to find the nearest element to the vertex value
        double nearest_idx = lower_bound(psum.begin(), psum.end(), vertex) - psum.begin();

        // Check for the nearest element and its adjacent elements
        if (nearest_idx == 0)
        {
            cout << nearest_idx + 1 << " ";
        }
        else if (nearest_idx == n)
        {
            cout << nearest_idx - 1 + 1 << " ";
        }
        else
        {
            if (abs(psum[nearest_idx] - vertex) < abs(psum[nearest_idx - 1] - vertex))
            {
                if (nearest_idx < l)
                {
                    cout << l + 1 << " ";
                }
                else
                {
                    cout << nearest_idx + 1 << " ";
                }
            }
            else
            {
                if (nearest_idx - 1 < l)
                {
                    cout << l + 1 << " ";
                }
                else
                {
                    cout << nearest_idx << " ";
                }
            }
        }
    }
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}