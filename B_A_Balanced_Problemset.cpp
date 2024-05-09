#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int x, int n)
{
    if (x % n == 0)
    {
        return x / n;
    }
    else
    {
        int y = x / n;
        int z = x - y * n;

        while (z > 0)
        {
            if (z % y == 0)
                return y;
            else
            {
                z = z + n;
                y--;
            }
        }
    }
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        cout << solve(x, n) << endl;
    }

    return 0;
}