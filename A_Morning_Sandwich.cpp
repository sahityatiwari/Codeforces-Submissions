#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxLayersOfSandwich(int b, int c, int h)
{

    b = b - 2;
    if (b < h + c)
        return 2 * b + 1 + 2;
    else
        return 2 * (h + c) - 1 + 2;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;

        int result = maxLayersOfSandwich(b, c, h);
        cout << result << "\n";
    }

    return 0;
}
