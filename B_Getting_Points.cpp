#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p, l, t;
    cin >> n >> p >> l >> t;

    int m2, m1;

    if ((n % 7 != 0 && (n / 7) % 2 == 0) || (n % 7 == 0 && (n / 7) % 2 == 1))
    {
        m2 = n / 14;
        m1 = 1;
    }
    else if (n % 14 == 0)
    {
        m2 = n / 14;
        m1 = 0;
    }
    else if ((n % 7 != 0 && (n / 7) % 2 != 0))
    {
        m2 = n / 14 + 1;
        m1 = 0;
    }

    int rem;
    int x = m2 * (l + 2 * t) + m1 * (l + t);
    int y = l + 2 * t;
    int ans, z;
    if (x >= p)
    {

        if (p % y != 0)
        {
            rem = p / y + 1;
            ans = n - rem;
        }
        else
        {
            rem = p / y;
            ans = n - rem;
        }
    }
    else
    {
        z = p - x;
        if (z % l != 0)
        {
            rem = z / l + 1;
        }
        else
        {
            rem = z / l;
        }

        ans = n - rem - m2 - m1;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
